using System;

namespace Tp_MiniProject
{
    class Program
    {
        static void Main(string[] args)
        {
            Ville tanger = new Ville("tanger", 250);
            Ville Casablanca = new Ville("Casablanca", 250);
            //Test de id
            Console.WriteLine(tanger +"  et  "+ Casablanca);
            //test de taille de Pays
            Pays Maroc = new Pays("Maroc");
            Maroc.Villes.Add(tanger);
            Maroc.Villes.Add(Casablanca);
            Console.WriteLine(Maroc.AfficherTaille());
        }
    }
}
