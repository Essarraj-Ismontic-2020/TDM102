using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace List_Methodes
{
    class Program
    {
        static void Main(string[] args)
        {
            Zoo zoo = new Zoo();

            Animal a1 = new Animal();
            a1.Nom = "Koala";
            a1.Id = (125);
            Console.WriteLine(a1.Nom + " " + a1.Id);

            zoo.Ajouter(a1);

            Animal a2 = new Animal();
            a2.Nom = "Chien";
            a2.Id = (258);
            Console.WriteLine(a2.Nom + " " + a2.Id);

            zoo.Ajouter(a2);

            Animal a3 = new Animal();
            a3.Nom = "Chat";
            a3.Id = (125);
            Console.WriteLine(a3.Nom + " " + a3.Id);

            zoo.Ajouter(a3);

            Console.ReadKey();

        }
    }
}