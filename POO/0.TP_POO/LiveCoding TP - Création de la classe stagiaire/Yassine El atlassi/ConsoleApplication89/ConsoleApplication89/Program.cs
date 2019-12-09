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
            Stagiaire Omar = null;
            Omar = new Stagiaire();
            Omar.Nom = "El atlassi";

            Console.Write(Omar.Nom);
            Console.ReadKey();
        }
    }
}
