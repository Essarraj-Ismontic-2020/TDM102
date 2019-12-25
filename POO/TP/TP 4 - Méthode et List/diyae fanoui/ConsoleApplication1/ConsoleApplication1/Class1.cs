using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace List_Methodes
{
    public class ville
    {
        private List<payse> _Listville;
        private long Compteur;

        public ville()
        {
            this._Listville= new List<payse>();
            Compteur = 0;
        }

        public void Ajouter(payse a)
        {
            Compteur = Compteur + 1;
            a.Id = Compteur;
            this._Listville.Add(a);
        }
    }

}
