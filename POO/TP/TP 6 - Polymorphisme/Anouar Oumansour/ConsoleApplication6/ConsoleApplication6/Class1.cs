using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Heritage
{
    public class Animal
    {
        public string Nom { get; set; }
        public string Place { get; set; }

        public Animal(string Nom, string place)
        {
            this.Nom = Nom;
            this.Place = Place;
        }

        public Animal(string nom)
        {
            Nom = nom;
        }

        public override string ToString()
        {
            return this.Nom + " " + this.Place;
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
            
            public virtual string presentation()
        {
            return $"Je suis un Animal et je m'appele {this.Nom}";
        }
        }
}