using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace creation_classe
{
    class Film
    {
        private string _Titre;
        private string _Genre;

        public Film (string Titre)
        {
            this.Titre = Titre;
        }

        public Film() { }


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
        public override string ToString ()
        {
            return "Film:" + this._Titre;
        }

        public override bool Equals (object obj)
        {
            Film film1 = obj as Film;
            if (film1 == null)
            {
                return false;
            }
            else
            {
                return true;
            }
        
        }


    }
}
