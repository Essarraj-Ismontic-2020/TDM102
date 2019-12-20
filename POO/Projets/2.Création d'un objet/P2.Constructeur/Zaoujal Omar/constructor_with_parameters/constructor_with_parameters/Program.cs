using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace constructor_with_parameters
{
    class Program
    {
        static void Main(string[] args)
        {
            Stagiaire S = new Stagiaire("Omar Zaoujal", 1);
            Console.WriteLine("Geek Name : " + S.Name + " and Geek number : " + S.Number);
        }
    }
}
