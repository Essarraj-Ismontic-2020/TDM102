using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int resultat;
            Class1 aissaoui = new Class1();
            resultat = aissaoui.Somme(15,32);
            Console.WriteLine(resultat);
            Console.ReadLine();
        }
    }
}
