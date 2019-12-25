using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace List_Methodes
{
    public class Zoo
    {
        private List<Animal> _Listanimal;
        private long Compteur;

        public Zoo()
        {
            this._Listanimal= new List<Animal>();
            Compteur = 0;
        }

        public void Ajouter(Animal a)
        {
            Compteur = Compteur + 1;
            m.Id = Compteur;
            this._Listanimal.Add(a);
        }
    }

}
