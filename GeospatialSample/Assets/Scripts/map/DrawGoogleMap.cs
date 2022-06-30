using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class DrawGoogleMap : MonoBehaviour
{
    // Google Maps Embed API
    public string key = null;
    int zoom = 18;
    float span = 5f;
    private float currentTime = 0f;


    void Start()
    {
        MapDisplay(SampleScript.mylat, SampleScript.mylon, SampleScript.mychar, SampleScript.friendlat, SampleScript.friendlon, SampleScript.friendchar);

    }


    void Update()
    {
        // 位置情報を送受信
        currentTime += Time.deltaTime;
        if(currentTime > span)
        {
            currentTime = 0f;
            MapDisplay(SampleScript.mylat, SampleScript.mylon, SampleScript.mychar, SampleScript.friendlat, SampleScript.friendlon, SampleScript.friendchar);
        }
    }


    public void MapDisplay(float mylat, float mylon, char mychar, float friendlat, float friendlon, char friendchar)
    {
        string Url = @"https://maps.googleapis.com/maps/api/staticmap?";

        // 中心座標 
        Url += "center=" + mylat + "," + mylon;

        // ズームレベル
        Url += "&zoom=" + zoom;

        // 地図画像のサイズ
        Url += "&size=800x800";

        // 自分の位置をピンで表示
        Url += "&markers=" + string.Format("|color:blue|label:{0}|", mychar.ToString()) + mylat + "," + mylon;

        // 他ユーザの位置をピンで表示
        Url += "&markers=" + string.Format("|color:red|label:{0}|", friendchar.ToString()) + friendlat + "," + friendlon;

        if (key != null && key.Length != 0)
        {
            Url += "&key=" + key;
        }

        Debug.Log("before: " + Url);
        Url = Uri.EscapeUriString(Url);
        Debug.Log("after: " + Url);
        StartCoroutine(Download(Url, tex => addSplatPrototype(tex)));
    }


    // GoogleMaps APIから地図画像をダウンロードする
    IEnumerator Download(string url, Action<Texture2D> callback)
    {
        var www = new WWW(url);
        yield return www; // Wait for download to complete

        callback(www.texture);
    }


    // imageにテクスチャを貼り付ける
    public void addSplatPrototype(Texture2D tex)
    {
        GetComponent<Image> ().sprite = Sprite.Create(tex, new Rect(0,0,tex.width,tex.height), Vector2.zero);
    }
}