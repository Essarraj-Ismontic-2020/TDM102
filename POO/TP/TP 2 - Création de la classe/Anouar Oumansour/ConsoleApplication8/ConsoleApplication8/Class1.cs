using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{
    public class animal
    {
        private string Nom { get; set; }
        private string Localisation { get; set; }
        public animal(string Nom, string Localisation)
        {
            this.Nom = Nom;
            this.Localisation = Localisation;
        }
        public override string ToString()
        {
            return this.Nom + "" + this.Localisation;
        }
        public override bool Equals(object obj)
        {
            animal animal = obj as animal;
            if (this.Nom == animal.Nom) return true;
            else
            {
                return false;
            }
        }
    }
}
