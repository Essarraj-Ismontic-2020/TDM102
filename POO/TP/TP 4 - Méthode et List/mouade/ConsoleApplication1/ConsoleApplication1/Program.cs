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
            vetment payse = new vetment();

            nike a1 = new nike();
            a1.Nom = "air force";
            a1.Id = (125);
            Console.WriteLine(a1.Nom + " " + a1.Id);

            payse.Ajouter(a1);

            nike a2 = new nike();
            a2.Nom = "tech";
            a2.Id = (258);
            Console.WriteLine(a2.Nom + " " + a2.Id);

            payse.Ajouter(a2);

            nike a3 = new nike();
            a3.Nom = "tech";
            a3.Id = (125);
            Console.WriteLine(a3.Nom + " " + a3.Id);

            payse.Ajouter(a3);

            Console.ReadKey();

        }
    }
}