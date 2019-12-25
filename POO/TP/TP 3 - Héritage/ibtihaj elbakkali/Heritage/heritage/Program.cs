using System;

namespace heritage
{
    class Program
    {
        static void Main(string[] args)
        {
            Personne X1 = new Personne("Alaoui");
            Patient P1 = new Patient("Chaoui");
            Docteur D1 = new Docteur("Anassi");

            Console.WriteLine(X1);
            Console.WriteLine(P1);
            Console.WriteLine(D1);

            Console.ReadKey();
        }
    }
}
