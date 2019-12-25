using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    class Program
    {
        static void Main(string[] args)
        {
            Film F1 = new Film ("The lord of the rings");
            Tvshow T1 = new Tvshow("Stranger things");
            Anime A1 = new Anime("Naruto");


            Console.WriteLine(F1);
            Console.WriteLine(T1);
            Console.WriteLine(A1);

            Console.ReadKey();
        }
    }
}
