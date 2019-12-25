using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExempleException
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            //Exemple 1
            try
            {
                Console.WriteLine("Donnez un nombre ");
                string nombre = Console.ReadLine();
                i = int.Parse(nombre);
                int j = 100;
                i = j / i;
                Console.WriteLine(i);
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine(string.Format("il y a un erreur :{0}", e.Message));
            }
            catch (FormatException e)
            {
                Console.WriteLine(" il y a un erreur dans la saisie nombre , veuillez entrer un nombre valide ");

                i = 0;
            }
            finally
            {
                Console.WriteLine("Fin de programme");
            }

          
            Console.Read();
        }
    }
}
