using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace equals_exemple_classroom
{
    public class stagiaiare
    {
        public string Nom;
        public int Id;
        public override bool Equals(object obj)
        {
            stagiaiare S = obj as stagiaiare;
            if (S != null)
            {
                if (S.Id == this.Id)
                {
                    return true;
                }
            }
            else
            {
                return false;
            }
            return false;
        }

    }
}
