using System;

namespace exception
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            // exemple 1
            try
            {
                Console.WriteLine("donnez un nombre :");
                string nombre = Console.ReadLine();
                i = int.Parse(nombre);
                int j = 10;
                i = j / i;
                Console.WriteLine(i);
            }
            catch(DivideByZeroException e)
            {
                Console.WriteLine(string.Format("il y un erreur :{0}", e.Message));
            }
            catch(FormatException e)
            {
                Console.WriteLine("il y a une erreur dans la saisie du nombre ,veullez entrer un nombre valide");
                Console.WriteLine(string.Format("il y un erreur : {0}", e.Message));
                i = 10;
            }
            finally
            {
                Console.WriteLine("fin de programme");
            }
            //exemple 2
            //console.WriteLine("i= " +i);
            Console.ReadLine();
        }
    }
}
