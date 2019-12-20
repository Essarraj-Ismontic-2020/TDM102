using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Salut c#");
            stagaire yassine = new stagaire();
            Kadiri.nom = "Kadiri Hamza";
            Kadiri.age = 19;
            Kadiri.id = "K560931";
        }
    }
    public class stagaire
    {
        public string nom;
        public int age;
        public string id;
    }
}
