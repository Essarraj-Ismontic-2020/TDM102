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
            stagiaire C1 = new stagiaire();
            C1.Prenom = "El Musaui";
            C1.Nom = "Oumaima";
            C1.Age = 18;
            C1.Afficher();
            stagiaire C2 = new stagiaire();
            C2.Prenom = "Bakkali";
            C2.Nom = "Sara";
            C2.Age = 19;
            C2.Afficher();
            Console.ReadKey ();
        }
    }
}
