using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace khounti
{
    class Program
    {
        static void Main(string[] args)
        {
            string name1 = "khounti";
            string name2 = "khounti";
            stagiare sta = new stagiare();
            bool check = sta.equalss(name1, name2);
            Console.Write(check);
            Console.Read();
        }
    }
}
