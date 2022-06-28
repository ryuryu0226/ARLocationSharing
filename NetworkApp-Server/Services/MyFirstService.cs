using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

using MagicOnion;
using MagicOnion.Server;
using MyApp.Shared;

// <Nil> に利用
// using MessagePack;

namespace NetworkAppServer.Services
{
    public class MyFirstService : ServiceBase<IMyFirstService>, IMyFirstService
    {
        public async UnaryResult<int> SumAsync(int x, int y)
        {
            Console.WriteLine($"Received:{x}, {y}");
            await Task.CompletedTask.ConfigureAwait(false);
            return x + y;
        }

        public async UnaryResult<Location> GetLocation(string username)
        {
            Console.WriteLine($"Received:{username}");
            Location loc;
            loc = new Location();
            loc.Latitude = 123.4;
            loc.Longitude = 56.7;
            loc.Altitude = 77.0;
            loc.Username = "Friend 1";
            await Task.CompletedTask.ConfigureAwait(false);
            return loc;
        }
    }
}
