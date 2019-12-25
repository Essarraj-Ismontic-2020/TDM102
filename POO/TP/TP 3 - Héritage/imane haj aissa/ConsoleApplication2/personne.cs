using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    public class personne
    {
        public string Nom { get; set; }
        public DateTime DateNaisance { get; set; }
        public personne(string Nom)
        {
            this.Nom = Nom;
            this.DateNaisance = DateTime.Now;
        }
        public override string ToString()
        {
            return this.Nom + "" + this.DateNaisance;
        }
        public override bool Equals(object obj)
        {
            personne personne = obj as personne;
            if (this.Nom == personne.Nom) return true;

            else
            {
                return false;
            }

        }
    }
}
