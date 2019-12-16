using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace constructor
{
    class Program
    {
            static void Main(string[] args)
            {
                stagiaire C1 = new stagiaire();
                C1.Prenom = "Kebyani";
                C1.Nom = "Mouad";
                C1.Age = 20;
                C1.Afficher();
                stagiaire C2 = new stagiaire();
                C2.Prenom = "Daghmomi";
                C2.Nom = "Sohaib";
                C2.Age = 18;
                C2.Afficher();
                Console.ReadKey();
            }
        }
    }
