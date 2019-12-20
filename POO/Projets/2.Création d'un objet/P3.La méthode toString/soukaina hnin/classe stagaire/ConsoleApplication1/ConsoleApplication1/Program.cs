using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int rusulta;
            stagaire hnin = new stagaire();
            rusulta= hnin.Somme(10, 15);
            Console.WriteLine(rusulta);

            Console.Read();


        }
    }
}
