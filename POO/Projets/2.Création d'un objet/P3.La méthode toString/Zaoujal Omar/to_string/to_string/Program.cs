using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace to_string
{
    class Program
    {
        static void Main(string[] args)
        {
            stagiaire S = new stagiaire { Name = "Zaoujal Omar", Age = 20 };
            Console.WriteLine(S.ToString());
        }
    }
}
