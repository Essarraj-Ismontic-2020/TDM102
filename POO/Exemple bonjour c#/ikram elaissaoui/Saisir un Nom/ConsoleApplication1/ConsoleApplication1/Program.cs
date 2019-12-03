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
            int i;
            Console.WriteLine("donnez votre Nom");
            String Nom = Console.ReadLine();
            Console.WriteLine("Votre Nom est:" + Nom);

            for (i = 0; i < 1001; i++)
            {
                Console.Write(i + ",");
            }
        }
    }
}
