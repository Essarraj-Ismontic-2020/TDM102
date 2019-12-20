using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace constructor_with_parameters
{
    public class Stagiaire
    {
        public string Name;
        public int Number;

        public Stagiaire(string Name, int Number)
        {
            this.Name = Name;
            this.Number = Number;
        }
       
    }
}
