using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace constructor
{
    class stagiaire
    {
        public string Prenom;
        public string Nom;
        public int Age;
        public stagiaire()
        {

        }
        public stagiaire(string pre, string nom, int ag)
        {
            Prenom = pre;
            Nom = nom;
            Age = ag;
        }
        public void Afficher()
        {
            Console.WriteLine("  Prenom:{0}\n  Nom:{1}\n  Age:{2}", Prenom, Nom, Age);
        }


    }
}

