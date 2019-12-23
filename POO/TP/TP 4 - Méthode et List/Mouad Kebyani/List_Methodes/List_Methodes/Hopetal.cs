using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace List_Methodes
{
    public class Hopetal
    {
        private List<maladé> _Listmaladé;
        private long Compteur;

        public Hopetal()
        {
            this._Listmaladé = new List<maladé>();
            Compteur = 0;
        }

        public void Ajouter(maladé m)
        {
            Compteur = Compteur + 1;
            m.Id = Compteur; 
            this._Listmaladé.Add(m);
        }
    }

}
