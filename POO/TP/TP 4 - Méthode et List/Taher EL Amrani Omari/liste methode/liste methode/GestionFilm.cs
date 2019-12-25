using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace liste_methode
{
    public class GestionFilm
    {
        private List<Film> ListFilm;
        private long Compteur;

        public GestionFilm()
        {
            this.ListFilm = new List<Film>();
           Compteur = 0;
        }

        public void Ajouter (Film f)
        {
            Compteur = Compteur + 1;
            f.Id = Compteur; //compteur ++
            this.ListFilm.Add(f);


        }


    }
}
