using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace equals
{
    class Program
    {
        static void Main(string[] args)
        {
            stagaire s1 = new stagaire();
            s1.Id = 1;
            s1.Nom = "kebyani";
            stagaire s2 = new stagaire();
            s2.Id =1;
            s2.Nom = "kebyani";
            if(s1.Equals(s2))
            {
                Console.Write("equals");

            }else
            {
                Console.Write(" no equals");

            }
            Console.Read();

        }
    }
}
