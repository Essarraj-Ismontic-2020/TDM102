using System;
using System.Collections.Generic;
using System.Text;

namespace Heritage_Polymorphisme
{
    public class Docteur : Personne
    {
        public Docteur(string Nom) : base(Nom)
        {
        }
        public override string ToString()
        {
            return $"Docteur{this.Nom}{this.DateNaissance}";
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
        public override string Presentation()
        {
            return $" je suis Docteur et je m'appele {this.Nom}";
        }
    }
}
