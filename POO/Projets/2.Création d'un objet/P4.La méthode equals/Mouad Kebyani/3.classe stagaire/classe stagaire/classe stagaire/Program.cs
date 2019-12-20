using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace classe_stagaire
{
    class Program
    {
        static void Main(string[] args)
        {
            stagaire a = new stagaire();
            a.age = 20;
            a.nom = "Kebyani";
            a.id = "M9900";
            Console.WriteLine(a.nom+ "\nage : "+a.age+ "\nid : "+a.id);
        }
    }
}
