using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class stagiaire
    {
        public string nom;
        public string prenom;
        public int age;

        public stagiaire(string unNom, string unPrenom, int unAge)
        {
            nom = unNom;
            prenom = unPrenom;
            age = unAge;
        }

        int GetAge()
        {
            return age;
        }

        public void SetAge(int value)
        {
            age = value;

        }
        public string Infos()
        {
            return nom + " " + prenom + " " + age + "ans";
        }
    }
}
