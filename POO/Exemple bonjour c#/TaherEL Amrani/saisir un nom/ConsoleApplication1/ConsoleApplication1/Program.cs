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
            int number;
            Console.WriteLine("donnez votre Nom");
            String Nom = Console.ReadLine();
            Console.WriteLine("Votre Nom est:" + Nom);

            for (number=0; number<1001; number++)
            {
                Console.Write(number+",");
            }

        }
    }
}
