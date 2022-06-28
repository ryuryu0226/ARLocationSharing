using MagicOnion;

using MessagePack;
using UnityEngine;

namespace MyApp.Shared
{
    public interface IMyFirstService : IService<IMyFirstService>
    {
        // The return type must be `UnaryResult<T>`.
        UnaryResult<int> SumAsync(int x, int y);

        // �����T�[�o�[���� ���[�U�[���� username �Ɉ�v���郆�[�U�[�̈ʒu�����擾
        UnaryResult<Location> GetLocation(string username); 

        // ���g�̈ʒu���𒆉��T�[�o�[�ɑ��M
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