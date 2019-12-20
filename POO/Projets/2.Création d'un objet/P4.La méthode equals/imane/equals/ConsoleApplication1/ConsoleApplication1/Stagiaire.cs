using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Stagiaire
    {
        public String Nom;
        public Int32 Id;
        public override bool Equals(object obj)
        {
            Stagiaire s = obj as Stagiaire;
            if (s != null)
            {
                if (s.Id == this.Id)
                {
                    return true;
                }
                else
                {
                    return false;
                }
               
            }
            return false;
        }
    }
}
