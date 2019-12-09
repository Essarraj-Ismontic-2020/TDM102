using System;
using System.Text.RegularExpressions;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            stagiaire S = new stagiaire {Nom="Omar Zaoujal",Age=19};
            S.groupes = new groupe { Code="TDM102"};
            Console.WriteLine("ismontic");
            Console.WriteLine("Le nom :" + S.Nom);
            Console.WriteLine("L'age :" + S.Age);
            Console.WriteLine("Le code:" + S.groupes.Code);






        }
    }
}
