using System;
using System.Collections.Generic;
using System.Text;

namespace Heritage_Polymorphisme
{
   public class Personne
    {
        public string Nom { get; set; }
        public DateTime DateNaissance { get; set; }
        public Personne(String Nom)
        {
            this.Nom = Nom;
            this.DateNaissance = DateTime.Now;
        }
        public override string ToString()
        {
            base.ToString();
            return this.Nom + " " + this.DateNaissance;
        }
        public override int GetHashCode()
        {
            return base.GetHashCode();
        }
        public override bool Equals(object obj)
        {
            Personne personne = obj as Personne;
            if (this.Nom == personne.Nom) return true;
            else
            {
                return false;
            }
        }
        public virtual string Presentation()
        {
            return $"Je suis Personne et je m'appele {this.Nom}";
        }
    }
}
