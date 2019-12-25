using Heritage;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3
{
    class Program
    {
        static void Main(string[] args)
        {
            ville a1 = new ville("tanger");
            bahriya m1 = new bahriya("tétwan");

            Console.WriteLine(a1);
            Console.WriteLine(m1);

            Console.ReadKey();
        }
    }
}
