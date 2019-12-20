using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication89 
{
    class Program
    {
        static void Main(string[] args)
        {
            Stagiaire salma = null;
            salma = new Stagiaire();
            salma.Nom = "boungab";

            Console.Write(salma.Nom);
            Console.ReadKey();
        }
    }
}
