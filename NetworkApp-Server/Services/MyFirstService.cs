using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

using MagicOnion;
using MagicOnion.Server;
using MyApp.Shared;

namespace NetworkAppServer.Services
{
    public class MyFirstService : ServiceBase<IMyFirstService>, IMyFirstService
    {
        public async UnaryResult<int> SumAsync(int x, int y)
        {
            Console.WriteLine($"Received:{x}, {y}");
            return x + y;
        }
    }
}
