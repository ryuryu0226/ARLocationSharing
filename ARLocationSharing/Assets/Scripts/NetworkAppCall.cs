using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Grpc.Core;
using MagicOnion.Client;
using MyApp.Shared;

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
        string host = "192.168.32.237";
        int port = 5001;

        // httpópÇ…ïœçX
        var channel = new Channel(host, port, ChannelCredentials.Insecure);

        var client = MagicOnionClient.Create<IMyFirstService>(channel);
        int result = await client.SumAsync(100, 23);
        Debug.Log($"Result: {result}");
        NetworkResultText.text = result.ToString();
    }
}
