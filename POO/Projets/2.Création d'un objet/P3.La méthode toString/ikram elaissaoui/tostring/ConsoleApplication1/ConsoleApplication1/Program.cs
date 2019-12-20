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
            Stagaire S;
            S = new Stagaire();
            S.Nom = "madani";
            S.Prenom = "Ayoub";
            int aAge = 10;
            Console.WriteLine(aAge);
            Console.WriteLine(S.ToString());
            Console.WriteLine(S.Nom);
            Console.WriteLine(S.Prenom);
            Console.ReadKey();
        }
    }
}
