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
    //Dictionary<string, Location> g_location_table = new Dictionary<string, Location>();
    public class MyFirstService : ServiceBase<IMyFirstService>, IMyFirstService
    {
        public static Dictionary<string, Location> location_table = new Dictionary<string, Location>();
        /*
        public MyFirstService()
        {
            location_table = new Dictionary<string, Location>();
        }
        */

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

            if (location_table.ContainsKey(username))
            {
                loc = location_table[username];
            } else
            {
                loc = new Location();
                loc.Exist = false;
            }

            await Task.CompletedTask.ConfigureAwait(false);
            return loc;
        }

        public async UnaryResult<bool> SendLocation(Location loc)
        {
            Console.WriteLine($"Received: name={loc.Username} lat={loc.Latitude} lon={loc.Longitude} alt={loc.Altitude}");
            //location_table.Add(loc.Username, loc);

            //同名のキー(ユーザー名) が指定された場合は上書きする (ユーザー名の衝突は無い想定)
            location_table[loc.Username] = loc; 
            Console.WriteLine($"table[{loc.Username}] = {loc.Username} {loc.Latitude} {loc.Longitude}");
            await Task.CompletedTask.ConfigureAwait(false);
            return true;
        }
    }
}
