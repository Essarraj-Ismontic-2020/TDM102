using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace constructeur
{
    class Program
    {
        static void Main()

        {
            Stagiaire S;
            S = new Stagiaire ("abdessamad", 21);
            S = new Stagiaire ("madani",16 );
            Console.WriteLine (S.Nom+""+S.Age+"");



        }
    }
}
