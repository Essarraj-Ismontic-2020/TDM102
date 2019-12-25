using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
   public class stagaire : personne
    {
        public stagaire (string Nom): base(Nom) { }
        public override string ToString()
        {
            return "stagaire: " + this.Nom + "" + this.DateNaisance; 
        }
        public override bool Equals(object obj)
        {
            personne personne = obj as personne;
            if (this.Nom == personne.Nom) return true;
            else { return false; }
        }
    }
}
