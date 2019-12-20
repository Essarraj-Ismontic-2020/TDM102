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
            Stagiaire Abdessamad = null;
           Abdessamad = new Stagiaire();
            Abdessamad.Nom = "Taourati";

            Console.Write(Abdessamad.Nom);
            Console.ReadKey();
        }
    }
}
