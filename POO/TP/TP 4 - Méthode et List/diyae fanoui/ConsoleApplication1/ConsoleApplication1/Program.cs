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
            ville payse = new ville();

            payse a1 = new payse();
            a1.Nom = "tanger";
            a1.Id = (125);
            Console.WriteLine(a1.Nom + " " + a1.Id);

            payse.Ajouter(a1);

            payse a2 = new payse();
            a2.Nom = "tantan";
            a2.Id = (258);
            Console.WriteLine(a2.Nom + " " + a2.Id);

            payse.Ajouter(a2);

            payse a3 = new payse();
            a3.Nom = "rabat";
            a3.Id = (125);
            Console.WriteLine(a3.Nom + " " + a3.Id);

            payse.Ajouter(a3);

            Console.ReadKey();

        }
    }
}