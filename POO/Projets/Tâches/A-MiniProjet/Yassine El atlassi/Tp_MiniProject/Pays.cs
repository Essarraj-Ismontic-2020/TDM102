using System;
using System.Collections.Generic;
using System.Text;

namespace Tp_MiniProject
{
    class Pays
    {
        #region Constructeur et Attribut
        static private int CompteurId { get; set; }
        public string Nom { get; set; }
        private int Taille { get; set; }
        public string Id { get;private set; }
        public List<Ville> Villes = new List<Ville>();
        public Pays(string Nom)
        {
            this.Nom = Nom;
            if(CompteurId==0)
            {
                CompteurId++;
            }
            this.Id = "P-"+CompteurId;
            CompteurId++;
        }
        #endregion

        public void AjouterVille(Ville ville)
        {
            Villes.Add(ville);
        }
        public string AfficherTaille()
        {
            foreach (Ville ville in Villes)
            {
                Taille = Taille + ville.Taille;
            }
            return Taille + "Km";
        }

        #region Redéfinition de les Methode
        public override string ToString()
        {
            return Id;
        }
        public override bool Equals(object obj)
        {
            Pays pays = obj as Pays;
            if (pays == null)
                return false;
            return Taille == pays.Taille && Nom == pays.Nom && Id == pays.Id;
        }
        public override int GetHashCode()
        {
            return Nom.GetHashCode() * Taille.GetHashCode() * Id.GetHashCode();
        }
        #endregion

    }
}
