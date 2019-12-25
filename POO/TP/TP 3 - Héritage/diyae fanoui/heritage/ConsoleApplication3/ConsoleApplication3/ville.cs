using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    public class ville
    {
        public string Nom { get; set; }
        public string Place { get; set; }

        public ville(string Nom, string place)
        {
            this.Nom = Nom;
            this.Place = Place;
        }

        public ville(string nom)
        {
            Nom = nom;
        }

        public override string ToString()
        {
            return this.Nom + " " + this.Place;
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