using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using MagicOnion;

namespace MyApp.Shared
{
    public interface IMyFirstService : IService<IMyFirstService>
    {
        // The return type must be `UnaryResult<T>`.
        UnaryResult<int> SumAsync(int x, int y);
    }
}