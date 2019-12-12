using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace chapitre_2
{
    class Voiture
    {
        //propriétés
        public int Vitesse { get; set; }
        public string Couleur;
        public string Marque { get; set; }
        //methode
        public void Klaxonner()
        {
            Console.WriteLine("toot !");
        }
        public bool VitesseAutorisee(int Vitesse)
        {
            return Vitesse <= 220;
        }
        public bool Demarrer()
        {
            if (ClesSurLeContact())
            {
                DemarrerLeMoteur();
                return true;
            }
            return false;
        }

        public void SortirDeLaVoiture()
        {
            if (ClesSurLeContact())
                PrevenirLUtilisateur();
        }

        private bool ClesSurLeContact()
        {
            // faire quelque chose pour vérifier
            return true;
        }

        private void DemarrerLeMoteur()
        {
            // faire quelque chose pour démarrer le moteur
        }

        private void PrevenirLUtilisateur()
        {
            Console.WriteLine("Bip bip bip");
        }
    }
}
