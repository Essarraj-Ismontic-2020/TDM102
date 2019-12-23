using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Création_de_classe
{
    class Program
    {
        static void Main(string[] args)
        {
            chombre chombre1 = null;

            chombre1 = new chombre("chombre 1");

            chombre1.Titre = " D'attente";

            Console.WriteLine(chombre1);
            
           
            chombre chombre2 = new chombre("chombre2");
            chombre2.Titre = " D'attente";

            Console.WriteLine(chombre2);

            chombre1.Titre = "Chambre D'attente";
            chombre1.Titre = "Chambre D'attente";

            if (chombre1.Equals(chombre2))
            {
                Console.WriteLine("Chombre 1 comme chombre 2");
            }
            else
            {
                Console.WriteLine("Chombre 1 pas comme chombre 2");
            }



            Console.ReadKey();
        }
    }
}
