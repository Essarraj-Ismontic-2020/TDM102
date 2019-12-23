using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Création_de_classe
{
    class chombre
    {
        
        private string _Titre;
        private string _Description;
        public chombre (string Titre)
        {
            this.Titre = Titre;
        }
       
        public chombre() { }

      
        public string Titre
        {
            set
            {
                _Titre = value;
            }
            get
            {
                return _Titre;
            }
        }


        public override string ToString()
        {
            return "chombre : " + this._Titre;
        }

        public override bool Equals(object obj)
        {

            chombre chombre2 = obj as chombre;
            if (chombre2 == null)
            {
                return false;
            }
            return true;
        }
    }
}
