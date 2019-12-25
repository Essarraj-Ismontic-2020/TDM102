using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{
    class Program
    {
        static void Main(string[] args)
        {
            Animal a1 = new Animal("Koala");
            Animal a2 = new Animal("Chien");

            Console.WriteLine(a1.ToString());
            Console.WriteLine(a2.ToString());
            Console.ReadKey();

        }
    }

    internal class Animal
    {
        private string v;

        public Animal(string v)
        {
            this.v = v;
        }
    }
}
