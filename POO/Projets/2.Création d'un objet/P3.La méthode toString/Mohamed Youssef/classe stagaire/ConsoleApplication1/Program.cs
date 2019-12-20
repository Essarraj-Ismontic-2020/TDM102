using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            stagaire Yussuf = new stagaire();
            Yussuf.Name = "faraj";
            Yussuf.Age = 22;
            Yussuf.Id = "H45154";
            Console.WriteLine("My name is : " + Yussuf.Name);
            Console.WriteLine("My Age is : " + Yussuf.Age);
            Console.WriteLine("My ID is : " + Yussuf.Id);
        }
    }
}
