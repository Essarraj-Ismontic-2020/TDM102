using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace equals_exemple_classroom
{
    public class Program
    {
        public static void Main(string[] args)
        {
            stagiaiare S1 = new stagiaiare();
            S1.Id = 1;
            S1.Nom = "omar zaoujal";
            stagiaiare S2 = new stagiaiare();
            S2.Id = 2;
            S2.Nom = "ali zaoujal";
            if (S1.Equals(S2))
                Console.WriteLine("equals");
            else
                Console.WriteLine("not");
        }
    }
}
