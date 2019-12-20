using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            Stagiaire S = new Stagiaire("Salma", "Bounagab", 16, 369);
            Console.Write(S.Name + "" + S.Firstname + "" + S.Age + "" + S.Id + "");
        }
    }
}
