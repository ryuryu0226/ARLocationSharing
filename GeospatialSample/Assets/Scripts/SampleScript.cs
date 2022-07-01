using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// ARFoundationとARCoreExtensions関連を使用する
using Google.XR.ARCoreExtensions;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using AR_Fukuoka;

// ネットワーク通信用
using Grpc.Core;
using MagicOnion.Client;
using MyApp.Shared;

public class SampleScript : MonoBehaviour
{
    public AREarthManager EarthManager; // GeospatialAPIを⽤いたトラッキング情報
    public VpsInitializer Initializer; // GeospatialAPIとARCoreの初期化と結果
    public Text OutputText; // 結果表⽰⽤のUI
    public double HeadingThreshold = 25; // ⽅位の許容精度
    public double HorizontalThreshold = 20; // ⽔平位置の許容精度
    public GameObject ContentPrefab; // 表⽰オブジェクトの元データ
    GameObject displayObject; // 実際に表⽰するオブジェクト
    public ARAnchorManager AnchorManager; // アンカー作成に使⽤
    public Text SendReultText; // 送信結果確認用
    public Text GetResultText; // 受信結果確認用
    float span = 1;
    private float currentTime = 0f;
    string host = "160.251.18.95"; // VPS サーバーに送信する場合 (グローバル通信)
    // string host = "localhost"; // 同一マシン内のサーバーに送信する場合
    // string host = "192.168.32.237"; // ローカルネットワーク内のサーバーに送信する場合 (プライベートアドレスを固定する必要アリ)
    // string host = "0.0.0.0";
    int port = 12345; // ネットワーク通信用ポート番号
    public static string myname = "Taro";
    public static string friendname = "Hanako";
    public Location friendLoc;
    public static float mylat = 34.64611f;
    public static float mylon = 135.0041f;
    public static char mychar = 'T';
    public static float friendlat = 34.64611f;
    public static float friendlon = 135.0041f;
    public static char friendchar = 'H';
    bool textflag = false;


    void Start()
    {
        // 原点（アプリケーションの起動位置）にピンを表示
        // GameObject zero = Instantiate(ContentPrefab, Vector3.zero, Quaternion.identity);
    }


    void Update()
    {
        currentTime += Time.deltaTime;

        string status = "";

        // 初期化失敗またはトラッキングができたいない場合は何もしないで戻る
        if (!Initializer.IsReady || EarthManager.EarthTrackingState != TrackingState.Tracking)
        {
            return;
        }
        // トラッキング結果を取得
        GeospatialPose pose = EarthManager.CameraGeospatialPose;
        mylat = (float)pose.Latitude;
        mylon = (float)pose.Longitude;
        mychar = Char.ToUpper(myname[0]);

        // 位置情報を送受信
        if(currentTime > span)
        {
            LocationSend(myname, pose.Latitude, pose.Longitude, pose.Altitude);
            LocationGet(friendname);
            friendlat = (float)friendLoc.Latitude;
            friendlon = (float)friendLoc.Longitude;
            friendchar = Char.ToUpper(friendLoc.Username[0]);
        }

        // トラッキング精度がthresholdより悪い(値が⼤きい)場合
        if (pose.HeadingAccuracy > HeadingThreshold || pose.HorizontalAccuracy > HorizontalThreshold)
        {
            status = "低精度︓周辺を⾒回してください";
            ShowTrackingInfo(status, pose);
        }
        else // 許容誤差以内の場合
        {
            status = "⾼精度︓High Tracking Accuracy";
            ShowTrackingInfo(status, pose);

            if(currentTime > span)
            {
                if (friendLoc.Exist)
                {
                    // サーバーから取得した緯度・経度・高度にピンを表示
                    ARGeospatialAnchor anchor = AnchorManager.AddAnchor(friendLoc.Latitude, friendLoc.Longitude, friendLoc.Altitude, Quaternion.identity); // 指定した位置・向きのアンカーを作成 (緯度・経度・⾼度をx,y,zに、⽅位を姿勢に変換)

                    // 初めて⾼精度計測できたタイミングでオブジェクトを⽣成
                    if (displayObject == null)
                    {
                        // double Altitude = pose.Altitude; // スマホの⾼さ-1.5mでおよそ地⾯の⾼さとする (tentatively)

                        // 自分のGPSで取得した位置から緯度・経度少し話した位置にピンを表示
                        // Quaternion quaternion = Quaternion.AngleAxis(180f - (float)pose.Heading, Vector3.up);  // ⾓度の補正(このあと使うAnchor⽣成関数が、南=0を前提としているため)
                        // ARGeospatialAnchor anchor = AnchorManager.AddAnchor(pose.Latitude + 0.0001, pose.Longitude + 0.0001, pose.Altitude, quaternion); // 指定した位置・向きのアンカーを作成 (緯度・経度・⾼度をx,y,zに、⽅位を姿勢に変換)

                        // アンカーが正しく作られていればオブジェクトを実体化
                        if (anchor != null)
                        {
                            displayObject = Instantiate(ContentPrefab, anchor.transform);
                        }
                    }
                    else
                    {
                        if (anchor != null)
                        {
                            Destroy(displayObject);
                            displayObject = Instantiate(ContentPrefab, anchor.transform);
                        }
                    }
                }
                currentTime = 0f;
            }
        }

        if (displayObject != null)
        {
            OutputText.text += string.Format(" Object Position: {0} \n" + " Camera Position: {1} \n",
                displayObject.transform.position.ToString(), // オブジェクトの位置
                Camera.main.transform.position.ToString() // カメラの位置
            );
        }
    }


    void ShowTrackingInfo(string status, GeospatialPose pose)
    {
        // 緯度・経度・⾼度やその精度、statusに代⼊された⽂字列を表⽰
        OutputText.text = string.Format(
            " \n\n" +
            " Latitude/Longitude: {0}°, {1}°\n" + // 緯度・経度
            " Horizontal Accuracy: {2}m\n" + // ⽔平⽅向の精度
            " Altitude: {3}m\n" + // ⾼度
            " Vertical Accuracy: {4}m\n" + // ⾼度の精度
            " Heading: {5}°\n" + // ⽅位
            " Heading Accuracy: {6} °\n" + // ⽅位の精度
            " {7} \n" // statusに代⼊された⽂字列
            ,
            pose.Latitude.ToString("F6"), // {0}
            pose.Longitude.ToString("F6"), // {1}
            pose.HorizontalAccuracy.ToString("F6"), // {2}
            pose.Altitude.ToString("F2"), // {3}
            pose.VerticalAccuracy.ToString("F2"), // {4}
            pose.Heading.ToString("F1"), // {5}
            pose.HeadingAccuracy.ToString("F1"), // {6}
            status // {7}
        );
    }


    public async void LocationSend(string Username, double Latitude, double Longitude, double Altitude)
    {
        // SendReultText.text = "LocationSend() has called.\n";
        // Debug.Log("LocationSend() has called.");

        // http用に変更
        var channel = new Channel(host, port, ChannelCredentials.Insecure);
        var client = MagicOnionClient.Create<IMyFirstService>(channel);

        /* 位置情報-送信 */
        // 自分のユーザー名と位置情報を送信する
        Location my_location = new Location();  // 独自定義クラス Location のインスタンスを作成して情報を埋める (定義は /ARLocationSharing/NetworkApp-Shared/Server/Services/Interface/IMyFirstService.cs )
        my_location.Username = Username;
        my_location.Latitude = Latitude;
        my_location.Longitude = Longitude;
        my_location.Altitude = Altitude;
        my_location.Exist = true;

        bool res = await client.SendLocation(my_location); // サーバーへ送信 (SendLocation の実装は /ARLocationSharing/NetworkApp-Server/Services/MyFirstService.cs )
        // Debug.Log($"LocationSend Result: {res}");
        SendReultText.text = $"LocationSend Result: {res}";
    }


    public async void LocationGet(string Username)
    {
        // GetResultText.text = "LocationGet() has called.\n";
        // Debug.Log("LocationGet() has called.");

        // http用に変更
        var channel = new Channel(host, port, ChannelCredentials.Insecure);
        var client = MagicOnionClient.Create<IMyFirstService>(channel);

        /* 位置情報-受信 */
        // 引数 username に該当するユーザーの位置情報を取得する
        Location loc = await client.GetLocation(Username); // サーバーへ送信 (GetLocation の実装は /ARLocationSharing/NetworkApp-Server/Services/MyFirstService.cs )
        if (loc.Exist) // 該当ユーザーが存在する
        {
            // Debug.Log($"LocationGet Result: name={loc.Username} lat={loc.Latitude.ToString()} lon={loc.Longitude.ToString()}");
            friendLoc = new Location();
            friendLoc = loc;
        }
        else // 該当ユーザーが存在しない
        {
            // Debug.Log($"LocationGet Result: name={Username} not registerd in server");
        }
        GetResultText.text = $"LocationGet Result: name={loc.Username}\n lat={loc.Latitude}\n lon={loc.Longitude}\n alt={loc.Altitude}";
    }


    public async void NetworkCallTest()
    {
        GetResultText.text = "NetworkCallTest() has called.";
        Debug.Log("NetworkCallTest() has called.");

        // http用に変更
        var channel = new Channel(host, port, ChannelCredentials.Insecure);
        var client = MagicOnionClient.Create<IMyFirstService>(channel);

        /* 位置情報-送信 */
        // 自分のユーザー名と位置情報を送信する
        Location my_location = new Location();  // 独自定義クラス Location のインスタンスを作成して情報を埋める (定義は /ARLocationSharing/NetworkApp-Shared/Server/Services/Interface/IMyFirstService.cs )
        my_location.Username = "hanako";
        my_location.Latitude = 34.803030230533;
        my_location.Longitude = 135.455982008042;
        my_location.Altitude = 93;
        my_location.Exist = true;

        bool res = await client.SendLocation(my_location); // サーバーへ送信 (SendLocation の実装は /ARLocationSharing/NetworkApp-Server/Services/MyFirstService.cs )
        Debug.Log($"SendLocation Result: {res}");
        GetResultText.text += $"\n SendLocation Result: {res}";


        /* 位置情報-受信 */
        // 引数 username に該当するユーザーの位置情報を取得する
        string username = "tarou";
        // string username = "hanako";
        Location loc = await client.GetLocation(username); // サーバーへ送信 (GetLocation の実装は /ARLocationSharing/NetworkApp-Server/Services/MyFirstService.cs )
        if (loc.Exist) // 該当ユーザーが存在する
        {
            Debug.Log($"GetLocation Result: name={loc.Username} lat={loc.Latitude.ToString()} lon={loc.Longitude.ToString()}");
        }
        else // 該当ユーザーが存在しない
        {
            Debug.Log($"GetLocation Result: name={username} not registerd in server");
        }
        GetResultText.text += $"\n GetLocation Result: name={loc.Username}, lat={loc.Latitude}, lon={loc.Longitude}, alt={loc.Altitude}";
    }


    public void OnClickTextButton()
    {
        textflag = !textflag;
        OutputText.gameObject.SetActive(textflag);
        SendReultText.gameObject.SetActive(textflag);
        GetResultText.gameObject.SetActive(textflag);
    }
}
