using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    public class Mamiphere : Animal
    {

        public Mamiphere(string Nom) : base(Nom)
        {
            this.Nom = Nom;
        }

        public override string ToString()
        {
            return "Mamiphere :" + this.Nom + " " + this.Place;
        }

        public override bool Equals(object obj)
        {
            Animal animal = obj as Animal;
            if (this.Nom == animal.Nom) return true;
            else
            {
                return false;
            }
        }
    }
}
