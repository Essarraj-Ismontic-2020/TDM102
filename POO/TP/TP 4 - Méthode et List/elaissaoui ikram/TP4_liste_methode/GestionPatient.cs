using System;
using System.Collections.Generic;
using System.Text;

namespace TP4_liste_methode
{
    class GestionPatient
    {
        private List<Patient> _ListePatient;
        private long compteur;
        public GestionPatient()
        {
            this._ListePatient = new List<Patient>();
            compteur = 0;
        }
        public void Ajouter (Patient p)
        {
            compteur = compteur + 1;
            p.Id = compteur; //++compteur
            this._ListePatient.Add(p);
        }
    }
}
