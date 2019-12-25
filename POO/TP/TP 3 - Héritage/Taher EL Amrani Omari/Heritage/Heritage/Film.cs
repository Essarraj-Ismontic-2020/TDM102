using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    public class Film
    {
        public string Nom { get; set; }
        public DateTime DateSortie {get; set;}

        public Film(string Nom)
        {
            this.Nom = Nom;
            this.DateSortie = DateTime.Now;
        }

        public override string ToString()
        {
            return "film:" +this.Nom + " " + this.DateSortie;
        }
        public override bool Equals(object obj)
        {
            Film film = obj as Film;
            if (this.Nom == film.Nom)
                return true;
            else
            {
                return false;
            }
        } 


    }
}
