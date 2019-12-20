using System;
using System.Collections.Generic;
using System.Text;

namespace Tp_MiniProject
{
    class Ville
    {
        #region Constructeur et Attribut
        static private int CompteurId { get; set; }
        public string Nom { get; set; }
        public int Taille { get; set; }
        public string Id { get; private set; }
        public Ville(string Nom, int Taille)
        {
            //Nom
            this.Nom = Nom;
            //Taille
            this.Taille = Taille;
            //ID
            if (CompteurId == 0)
            {
                CompteurId++;
            }
            this.Id = "V-" + CompteurId;
            CompteurId++;
        }
        #endregion

        #region Redéfinition de les Methode
        public override string ToString()
        {
            return Id;
        }
        public override bool Equals(object obj)
        {
            Ville ville = obj as Ville;
            if (ville == null)
                return false;
            return Taille == ville.Taille && Nom == ville.Nom && Id == ville.Id;
        }
        public override int GetHashCode()
        {
            return Nom.GetHashCode() * Taille.GetHashCode() * Id.GetHashCode();
        }
        #endregion
    }
}
