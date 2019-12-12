using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main()
        {
            Stagiaire S = new Stagiaire ("Oumansour", "Anouar", 22, 213);
            Console.Write(S.Name + "" + S.Firstname + "" + S.Age + "" + S.Id+"");
            Stagiaire S = new Stagiaire("Hamza", "Lazaar", 18, 587);
            Console.Write(S.Name + "" + S.Firstname + "" + S.Age + "" + S.Id + "");

        }
    }
}
