using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace creation_classe
{
    class Program
    {
        static void Main(string[] args)
        {
            Film film1 = null;
            film1 = new Film("film1");


            film1.Titre = "the lord of the rings";


            Console.WriteLine(film1);
            Console.WriteLine(film1.ToString() );
            Console.WriteLine(film1.Titre);


            Film film2 = new Film();

            if (film1.Equals(film2))
            {
                Console.WriteLine(" le film1 est le meme que le film2.");
            }
            else
            {
                Console.WriteLine(" le film 1 n'est le meme que le film 2");
               
            }


            Console.ReadKey();
        }
    }
}
