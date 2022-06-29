using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class DrawGoogleMap : MonoBehaviour {
    public string key = null;
    public int zoom = 15;

    // Google Maps Embed API
    float span = 5f;
    private float currentTime = 0f;


    // Use this for initialization
    void Start()
    {
        MapDisplay(SampleScript.mylat, SampleScript.mylon);
    }
    
    // Update is called once per frame
    void Update()
    {
        // 位置情報を送受信
        currentTime += Time.deltaTime;
        if(currentTime > span)
        {
            Debug.Log("map");
            currentTime = 0f;
            MapDisplay(SampleScript.mylat, SampleScript.mylon);
        }
    }

    public void MapDisplay(float lat, float lon)
    {
        string Url = @"https://maps.googleapis.com/maps/api/staticmap?";

        // 中心座標 
        Url += "center=" + lat + "," + lon;

        // ズームレベル
        Url += "&zoom=" + zoom;

        // 地図画像のサイズ
        Url += "&size=800x800";

        if (key != null && key.Length != 0)
        {
            Url += "&key=" + key;
        }

        Url = Uri.EscapeUriString(Url);
        StartCoroutine(Download(Url, tex => addSplatPrototype(tex)));
    }

    // GoogleMaps APIから地図画像をダウンロードする
    IEnumerator Download(string url, Action<Texture2D> callback)
    {
        var www = new WWW(url);
        Debug.Log(url);
        Debug.Log("header" + www.texture);
        yield return www; // Wait for download to complete

        callback(www.texture);
    }

    // imageにテクスチャを貼り付ける
    public void addSplatPrototype(Texture2D tex)
    {
        GetComponent<Image> ().sprite = Sprite.Create(tex, new Rect(0,0,tex.width,tex.height), Vector2.zero);
    }
}