using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace classe_Stagiaire
{
    class Program
    {
        static void Main(string[] args)
        {
            Stagaire hajar = new Stagaire();
            hajar.Note = 29;
            Console.WriteLine(hajar.Note);
        }
    }
}
