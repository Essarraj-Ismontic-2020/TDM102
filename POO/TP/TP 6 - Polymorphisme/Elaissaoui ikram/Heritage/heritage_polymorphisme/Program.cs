using System;

namespace Heritage_Polymorphisme
{
    class Program
    {
        static void Main(string[] args)
        {
        
            Personne P1 = new Patient("Chaoui");
            Personne D1 = new Docteur("Anassi");

            Console.WriteLine(P1.Presentation());
            Console.WriteLine(D1.Presentation());

            Console.ReadKey();
        }
    }
}
