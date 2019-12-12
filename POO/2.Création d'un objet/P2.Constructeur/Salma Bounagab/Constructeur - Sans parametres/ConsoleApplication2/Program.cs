using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            stagiaire S;
            S = new stagiaire("Salma");
            Console.WriteLine(S.Nom);
        }
    }
}
