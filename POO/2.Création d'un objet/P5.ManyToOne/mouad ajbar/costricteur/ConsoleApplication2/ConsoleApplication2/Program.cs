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
            C1.Prenom = "fanoui";
            C1.Nom = "diyae";
            C1.Age = 20;
            C1.Afficher();
            stagiaire C2 = new stagiaire();
            C2.Prenom = "mouad";
            C2.Nom = "ajbar";
            C2.Age = 18;
            C2.Afficher();
            Console.ReadKey ();
        }
    }
}
