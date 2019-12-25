using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        private static readonly object console;

        static void Main(string[] args)
        {
            Console.Write("donnez votre nom :");
            string Nom = Console.ReadLine();
            Console.Write("donnez votre prenom :");
            string prenom = Console.ReadLine();
            Console.WriteLine("votre nom est =" + Nom +prenom);
            int b = 0;
            for (int i=0;i<=1000;i++)
            {
                Console.Write(i + ",");
                b++;
                if (b == 10) ;
            }
            Console.WriteLine();
            b = 0;
        }
    }
}
