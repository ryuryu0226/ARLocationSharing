using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Grpc.Core;
using MagicOnion.Client;
using MyApp.Shared;

// �f�o�b�O�o�͗p
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
        string host = "160.251.18.95";
        //string host = "localhost";

        int port = 12345;

        // http�p�ɕύX
        var channel = new Channel(host, port, ChannelCredentials.Insecure);

        // Sum(100, 23) ���T�[�o�[��Ŏ��s���Č��ʂ��󂯎��
        var client = MagicOnionClient.Create<IMyFirstService>(channel);
        var result = await client.SumAsync(100, 23);
        Debug.Log($"Result: {result}");
        NetworkResultText.text = "server res: " + result.ToString();

        // �Ǝ��N���X���󂯎��
        var client2 = MagicOnionClient.Create<IMyFirstService>(channel);
        Location loc = await client2.GetLocation("Friend 1");
        Debug.Log($"Result: {loc.Latitude.ToString()} {loc.Longitude.ToString()}");
        NetworkResultText.text = "name :" + loc.Username + "loc :" + loc.Latitude.ToString();

    }
}
