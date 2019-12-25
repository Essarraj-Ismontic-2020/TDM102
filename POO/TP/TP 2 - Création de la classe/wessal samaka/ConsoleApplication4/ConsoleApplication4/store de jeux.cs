using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    class store_de_jeux
    {
        private long Id { get; set; }
        public string Nom { get; set; }
        public Jeux j { get; set; }
        public store_de_jeux (string Nom)
        {
            this.Nom = Nom;
        }
        public override string ToString()
        {
            return "store Nom :" + this.Nom;
        }
    }
}
