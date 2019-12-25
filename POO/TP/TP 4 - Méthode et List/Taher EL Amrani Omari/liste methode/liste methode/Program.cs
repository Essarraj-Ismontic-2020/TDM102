using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace liste_methode
{
    class Program
    {
        static void Main(string[] args)
        {
            GestionFilm gestionfilm = new GestionFilm();
            Film f = new Film();


            f.Nom = "The lord of the rings";
            f.DateSortie = new DateTime (2001, 5, 3);

            gestionfilm.Ajouter(f);
            Film f2 = new Film();
            f2.DateSortie= new DateTime(2001, 5, 3);

            gestionfilm.Ajouter(f2);
        }
    }
}
