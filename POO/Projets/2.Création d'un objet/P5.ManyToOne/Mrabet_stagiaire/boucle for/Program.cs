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
            Console.Write("donner votre nom : ");
            string nom = Console.ReadLine();
            Console.WriteLine("le nom est :" + nom);
            for (int i = 0; i < 1001; i++)
            {
                Console.Write(i + ",");
            }
    }
}
