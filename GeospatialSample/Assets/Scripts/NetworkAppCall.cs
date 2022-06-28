using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Grpc.Core;
using MagicOnion.Client;
using MyApp.Shared;

// デバッグ出力用
using UnityEngine.UI;

public class NetworkAppCall : MonoBehaviour
{
    public Text NetworkResultText;

    void Start()
    {
        CallTest();
    }
    public async void CallTest()
    {
        NetworkResultText.text = "CallTest() has called.";
        string host = "192.168.32.237";   // ローカルネットワーク内のサーバーに送信する場合
        //string host = "160.251.18.95";  // VPS サーバーに送信する場合
        //string host = "localhost";      // 同一マシン内のサーバーに送信する場合
        //string host = "0.0.0.0";

        int port = 12345;

        // http用に変更
        var channel = new Channel(host, port, ChannelCredentials.Insecure);

        // Sum(100, 23) をサーバー上で実行して結果を受け取る
        //var client = MagicOnionClient.Create<IMyFirstService>(channel);
        //var result = await client.SumAsync(100, 23);
        //Debug.Log($"Result: {result}");
        //NetworkResultText.text = "server res: " + result.ToString();

        // 自分のユーザー名の位置情報を送信
        Location my_location = new Location();
        my_location.Username = "hanako";
        my_location.Latitude = 34.803030230533;
        my_location.Longitude = 135.455982008042;
        my_location.Altitude = 93;
        my_location.Exist = true;

        var client3 = MagicOnionClient.Create<IMyFirstService>(channel);
        bool res = await client3.SendLocation(my_location);
        Debug.Log($"SendLocation Result: {res}");


        // 独自クラスを受け取る
        var client2 = MagicOnionClient.Create<IMyFirstService>(channel);
        string username = "tarou";
        Location loc = await client2.GetLocation(username);
        if (loc.Exist)
        {
            Debug.Log($"GetLocation Result: name={loc.Username} lat={loc.Latitude.ToString()} lon={loc.Longitude.ToString()}");
        } else
        {
            Debug.Log($"GetLocation Result: name={username} not registerd in server");
        }
        NetworkResultText.text = "name :" + loc.Username + "loc :" + loc.Latitude.ToString();

    }
}
