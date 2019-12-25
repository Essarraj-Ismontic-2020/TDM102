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
            personne P1 = new personne("imane ");
            stagaire S1 = new stagaire("wissal");
            Formateur F1 = new Formateur("salma ");

            Console.WriteLine(P1);
            Console.WriteLine(S1);
            Console.WriteLine(F1);

        }

    }
}
