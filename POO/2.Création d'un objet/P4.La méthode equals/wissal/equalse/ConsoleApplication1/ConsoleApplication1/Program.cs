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
            Stagiaire s1 = new Stagiaire();
            s1.Nom= "wisal";
            Stagiaire s2 = new Stagiaire();
            s2.Nom = "wisal";
           if(s1.Equals(s2))
            { 
            Console.Write("equals");
            }
            else
                 {
                Console.Write("nom equals");
            }
            Console.Read();
        }
    }
}
