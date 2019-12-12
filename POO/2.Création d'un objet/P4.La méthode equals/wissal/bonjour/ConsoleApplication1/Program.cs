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
            Console.Write("+. Somme");
            Console.Write("/. Division");
            Console.Write("*. Multiplication");
            Console.Write("-. Soustraction");
            int a, b, c ;
            char n;
            n = Convert(Console.ReadLine());
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());
            switch(n){
            case '+':
            a + b = c;
            Console.Write("{0} + {1} = {2}", a, b, c);
            
            break;
            case '/':
             a / b = c;
            Console.Write("{0}*{1} = {2}", a, b, c);
            break;
            case '*':
             a * b = c;
            Console.Write("{0} / {1} = {2}", a, b, c);
            break;
            case '-':
             a - b = c;
            Console.Write("{0} / {1} = {2}", a, b, c);
            break;
            }
        }
    }
}
