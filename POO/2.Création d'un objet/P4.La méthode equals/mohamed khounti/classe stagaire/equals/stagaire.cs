using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace equals
{
    class stagaire
    {
        public String Nom;
        public int Id;
        public override bool Equals(object obj)
        {
            stagaire s = obj as stagaire;
            if (s!= null)
            {
                if(s.Id  == this.Id)
                {
                    return true;
                }
            }else
            {
                return false;
            }
            return false;

        }

    }
}
