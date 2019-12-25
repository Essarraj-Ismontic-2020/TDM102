using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    public class Anime : Film
    {

        public Anime (string Nom) : base(Nom)
        {

        }
        public override string ToString()
        {
            return "Anime:" + this.Nom + " " + this.DateSortie;
        }

        public override bool Equals(object obj)
        {
            Film film = obj as Film;
            if (this.Nom == film.Nom) return true;
            else
            {
                return false;
            }
        }
    }
}
