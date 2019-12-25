using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace creationclasse
{
    class projet
    {
        public string _Titre { get; set; }
        private string Descreption;
        public projet(string Titre)
        {
            this._Titre = Titre;
        }
        public projet() { }
   
        public override string ToString()
        {
            return "projet:" + this._Titre;
        }
        public override bool Equals(object obj)
        {
            projet projet2 = obj as projet;
            if ( projet2 == null)
            {
                return false;
            }
            return true;
        }
    }
}
