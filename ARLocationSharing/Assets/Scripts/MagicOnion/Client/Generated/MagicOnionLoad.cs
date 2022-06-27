using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using MessagePack;
using MessagePack.Resolvers;

public class MagicOnionLoad : MonoBehaviour
{
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    static void RegisterResolvers()
    {
        StaticCompositeResolver.Instance.Register(
            MagicOnion.Resolvers.MagicOnionResolver.Instance,
            MessagePack.Resolvers.GeneratedResolver.Instance,
            StandardResolver.Instance
        );

        MessagePackSerializer.DefaultOptions = MessagePackSerializer.DefaultOptions
            .WithResolver(StaticCompositeResolver.Instance);
    }
}
