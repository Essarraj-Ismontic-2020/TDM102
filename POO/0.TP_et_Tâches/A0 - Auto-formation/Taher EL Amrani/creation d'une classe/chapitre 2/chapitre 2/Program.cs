using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace chapitre_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Voiture voitureNicolas = new Voiture { Couleur = "Bleue", Marque = "kia", Vitesse = 50 };
            Voiture voitureJeremie = new Voiture();
            voitureJeremie.Couleur = "Bleue";
            voitureJeremie.Marque = "kia";
            voitureNicolas.Klaxonner();
        }
    }
}
