using MagicOnion;

using MessagePack;
using UnityEngine;

namespace MyApp.Shared
{
    public interface IMyFirstService : IService<IMyFirstService>
    {
        // The return type must be `UnaryResult<T>`.
        UnaryResult<int> SumAsync(int x, int y);

        // 中央サーバーから ユーザー名が username に一致するユーザーの位置情報を取得
        UnaryResult<Location> GetLocation(string username); 

        // 自身の位置情報を中央サーバーに送信
        UnaryResult<bool> SendLocation(Location loc);
    }

    [MessagePackObject]
    public class Location
    {
        [Key(0)] public string Username { get; set; }
        [Key(1)] public double Latitude { get; set; }
        [Key(2)] public double Longitude { get; set; }
        [Key(3)] public double Altitude { get; set; }
        [Key(4)] public bool Exist { get; set; }
    }
}