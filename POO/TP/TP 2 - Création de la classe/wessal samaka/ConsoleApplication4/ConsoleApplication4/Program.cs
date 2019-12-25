using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    class Program
    {
        static void Main(string[] args)
        {
            store_de_jeux str1 = new store_de_jeux("App store");
            Console.WriteLine(str1);
            Jeux j1 = new Jeux("Minicraft", 140);
            Console.WriteLine(j1);
            
                 }
    }
}
