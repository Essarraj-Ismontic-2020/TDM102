using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Myfirstproject;

namespace @object
{
    class Program
    {
        static void Main(string[] args)
        {
          
            Voiture car1 = new Voiture { color = "Bleue", brand = "Peugeot", speed = 50 };
            Voiture car2 = new Voiture { color = "gray", brand = "mercedes", speed = 90 };
            Console.WriteLine("car 1 is a "+car1.color+", "+car1.brand+" with the speed of: "+car1.speed);
            Console.WriteLine("car 2 is a " + car2.color + ", " + car2.brand + " with the speed of: " + car2.speed);
            car1.honk();
            car2.honk();
        }
    }
}
