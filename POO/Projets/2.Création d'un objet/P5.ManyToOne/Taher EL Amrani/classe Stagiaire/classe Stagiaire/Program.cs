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
            Stagaire Taher = new Stagaire();
            Taher.Note = 19;
            Console.WriteLine(Taher.Note);
        }
    }
}
