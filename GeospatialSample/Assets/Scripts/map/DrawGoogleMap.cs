using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class DrawGoogleMap : MonoBehaviour {
    public float lat = 34.64611f;
    public float lng = 135.0041f;
    public string key = null;
    public int zoom = 15;

    // Google Maps Embed API
    string Url = @"https://maps.googleapis.com/maps/api/staticmap?";

    // Use this for initialization
    void Start () {
        Build ();
    }
    
    // Update is called once per frame
    void Update () {
        
    }

    public void Build(){

        // 中心座標 
        Url += "center=" + lat + "," + lng;

        // ズームレベル
        Url += "&zoom=" + zoom;

        // 地図画像のサイズ
        Url += "&size=800x800";

        if (key != null && key.Length != 0) {
            Url += "&key=" + key;
        }

        Url = Uri.EscapeUriString(Url);
        StartCoroutine(Download(this.Url, tex => addSplatPrototype(tex)));
    }

    /// GoogleMapsAPIから地図画像をダウンロードする
    IEnumerator Download(string url, Action<Texture2D> callback) {
        var www = new WWW(url);
        yield return www; // Wait for download to complete

        callback(www.texture);
    }

    /// imageにテクスチャを貼り付ける
    public void addSplatPrototype(Texture2D tex) {
        GetComponent<Image> ().sprite = Sprite.Create(tex, new Rect(0,0,tex.width,tex.height), Vector2.zero);
    }
}