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
            Voiture voitureNicolas = new Voiture { Couleur = "red", Marque = "renault", Vitesse = 220 };
            Voiture voitureJeremie = new Voiture();
            voitureJeremie.Couleur = "red";
            voitureJeremie.Marque = "renault";
            voitureNicolas.Klaxonner();
        }
    }
}
