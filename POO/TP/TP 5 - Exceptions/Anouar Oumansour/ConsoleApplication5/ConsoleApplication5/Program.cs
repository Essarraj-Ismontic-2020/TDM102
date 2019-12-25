using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication5
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            try
            {
                Console.WriteLine("Donnez un nombre:");
                String nombre = Console.ReadLine();
                i = int.Parse(nombre);
                int j = 10;
                i = j / i;
                Console.WriteLine(i);
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine(String.Format("Il y a une erreur : {0}", e.Message));
            }
            catch (FormatException e)
            {
                Console.WriteLine("Il ya une erreur, svp entrez le format correct");
                Console.WriteLine(String.Format("il y a une erreur", e.Message));
                i = 10;
            }
            Console.WriteLine("Fin de programme");
        }
    }
}

