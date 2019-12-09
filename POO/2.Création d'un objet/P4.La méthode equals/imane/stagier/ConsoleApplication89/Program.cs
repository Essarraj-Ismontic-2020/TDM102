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
            Stagiaire imane= null;
            imane = new Stagiaire();
            imane.Nom = "haj aissa";

            Console.Write(imane.Nom);
            Console.ReadKey();
        }
    }
}
