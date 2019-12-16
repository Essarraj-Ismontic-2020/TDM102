using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace manytoone
{
    class Program
    {
        static void Main(string[] args)
        {
            Stagaire S = new Stagaire { Nom = "Kebyani", Age = 21 };
            S.GroupeStagaires = new Groupe { Code = "TDM102" };
            Console.WriteLine("ISMONTIC");
            Console.WriteLine("Le Nom :" + S.Nom);
            Console.WriteLine("L'age :" + S.Age);
            Console.WriteLine("Le Code: " + S.GroupeStagaires.Code);
        }
    }
}
