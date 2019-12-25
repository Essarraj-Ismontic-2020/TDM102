using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    public class bahriya : ville
    {

        public bahriya(string Nom) : base(Nom)
        {
            this.Nom = Nom;
        }

        public override string ToString()
        {
            return "bahriya :" + this.Nom + " " + this.Place;
        }

        public override bool Equals(object obj)
        {
            ville ville = obj as ville;
            if (this.Nom == ville.Nom) return true;
            else
            {
                return false;
            }
        }
    }
}
