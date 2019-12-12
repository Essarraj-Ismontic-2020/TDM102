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
            Voiture voitureNicolas = new Voiture { Couleur = "Bleue", Marque = "Peugeot", Vitesse = 50 };
            Voiture voitureJeremie = new Voiture();
            voitureJeremie.Couleur = "Blue";
            voitureJeremie.Marque = "Peageot";
            voitureNicolas.Klaxonner();
        }
    }
}
