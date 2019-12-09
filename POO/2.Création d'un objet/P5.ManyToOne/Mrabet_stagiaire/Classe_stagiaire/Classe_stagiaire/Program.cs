using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Classe_stagiaire
{
    class Program
    {
        string name;
        int age;

       
      
             public  Stagiaire(string name, int age)
        {
            this.age = age;
            this.name = name;
            Console.WriteLine("Nouvelle  stagiaire créée. Cette stagiaire  s'appelle " + name + " et a " + age + " an(s).");
        }



        public void Stagiaire()
        {
            Console.WriteLine("Bonjour ! Je m'appelle " + this.name + " et j'ai " + this.age + " ans.");
        }
    }
}
