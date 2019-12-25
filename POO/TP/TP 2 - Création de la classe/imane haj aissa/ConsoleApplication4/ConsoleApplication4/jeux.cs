using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    public class Jeux
    {
        public string Nom { get; set; }
        public int Stockage { get; set; }
        public Jeux(string Nom, int stockage)
        { this.Nom = Nom;
            this.Stockage = stockage;
        }


        public override string ToString()
        {
            return "le nom de jeux :     "+this.Nom +"stockage de jeux:  " +this.Stockage  + "Mts";
        }

        public override bool Equals(object obj)
        {
            Jeux jeux = obj as Jeux;
            if (this.Nom == jeux.Nom)
                return true;
            else return false;

        }
    }
}