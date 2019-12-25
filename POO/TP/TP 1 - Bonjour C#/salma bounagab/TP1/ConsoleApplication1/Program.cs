using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.Write("Entrer votrte nom:");
            string a = Console.ReadLine();
            int b = 0;
            Console.WriteLine("Le nom que vous avez entrer est: " + a);
            for (int i = 0; i <= 1000; i++)
            {
                Console.Write(i + ",");
                b++;
                if(b==1)
                {
                    Console.WriteLine();
                    b = 0;
                    Console.ReadKey();
                }
            }
        }
    }
}
