using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace creationclasse
{
    class Program
    {
        static void Main(string[] args)
        {
            
            projet projet1 = null;
            
            projet1 = new projet("projet1");
            projet1._Titre = "creation d'une application";

            Console.WriteLine(projet1);
            Console.WriteLine( projet1.ToString ());
            Console.WriteLine(projet1._Titre);


            projet projet2 = new projet("projet2"); 
            projet2._Titre = "creation d'une application";
            if(projet1. Equals (projet2))
            {
                Console.WriteLine("projet1 egale projet2");
            }
            else 
            {
                Console.WriteLine("projet1 n'egale pas projet2");
            }

            
            Console.ReadKey();


        }
    }
}
