using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bonjour_csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            string Nom;
            Console.WriteLine("Donnez votre Nom:");
            Nom = Console.ReadLine();

            Console.WriteLine("votre Nom est:" + Nom);


            Console.ReadKey();
        }
    }
}
