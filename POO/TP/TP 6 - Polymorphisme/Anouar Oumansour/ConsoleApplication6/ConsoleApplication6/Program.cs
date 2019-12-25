using Heritage;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApplication3
    {
        class Program
        {
            static void Main(string[] args)
            {
                Animal a1 = new Animal("Koala");
                Animal m1 = new Mamiphere("Chien");

                Console.WriteLine(a1.presentation());
                Console.WriteLine(m1.presentation());

                Console.ReadKey();
            }
        }
    }

