using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Stagaire
    {
        public String Nom;
        public string Prenom;
        public Int32 Age;
        public override string ToString()
        {
     
            return Nom;
        }

        public string tostring(int varianle)
        {
            string result;
            result =  varianle.ToString();
            return result;
        }
    }
}
