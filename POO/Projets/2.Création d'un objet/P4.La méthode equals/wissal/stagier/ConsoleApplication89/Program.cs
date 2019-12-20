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
            Stagiaire wissal = null;
            wissal = new Stagiaire();
          wissal.Nom = "samaka";

            Console.Write(wissal.Nom);
            Console.ReadKey();
        }
    }
}
