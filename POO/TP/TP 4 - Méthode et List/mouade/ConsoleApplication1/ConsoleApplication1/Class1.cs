using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace List_Methodes
{
    public class vetment
    {
        private List<nike> _Listvetment;
        private long Compteur;

        public vetment()
        {
            this._Listvetment = new List<nike>();
            Compteur = 0;
        }

        public void Ajouter(nike a)
        {
            Compteur = Compteur + 1;
            a.Id = Compteur;
            this._Listvetment.Add(a);
        }
    }

}
