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
            Hopetal hopetal = new Hopetal();

            maladé m = new maladé();
            m.Nom = "-Librahimi";
            m.DateNaissance = new DateTime(1958,4,12);
            Console.WriteLine(m.Nom + " " + m.DateNaissance);

            hopetal.Ajouter(m);

            maladé m2 = new maladé();
            m2.Nom = "-Lidrissi";
            m2.DateNaissance = new DateTime(1984,10,9);
            Console.WriteLine(m2.Nom + " " + m2.DateNaissance);

            hopetal.Ajouter(m2);

            maladé m3 = new maladé();
            m3.Nom = "-Merzouki";
            m3.DateNaissance = new DateTime(1990, 8, 15);
            Console.WriteLine(m3.Nom + " " + m3.DateNaissance);

            hopetal.Ajouter(m3);

            Console.ReadKey();

        }
    }
}
