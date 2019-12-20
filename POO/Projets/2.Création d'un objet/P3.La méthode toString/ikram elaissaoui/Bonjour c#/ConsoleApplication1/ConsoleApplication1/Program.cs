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
            Console.WriteLine("donnez votre nom:");
            String nom= Console.ReadLine();
            Console.WriteLine("votre nom :" +nom);
            int b = 0;
            for(int i=0;i<=1000;i++)
            {
                Console.Write(i + ",");
                b++;
                    if (b==10)
                {
                    Console.WriteLine();
                    b = 0;

                }
            }

        }
    }
}
