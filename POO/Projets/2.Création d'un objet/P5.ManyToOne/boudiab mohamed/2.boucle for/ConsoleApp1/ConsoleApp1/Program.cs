using System;

namespace ConsoleApplication3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("donner votre nom:");
            string N = Console.ReadLine();
            Console.WriteLine("votre nome est:" + N);
            int b = 0;
            for (int i = 0; i <= 1000; i++)
            {

                Console.Write(N + ",");
                b++;
                if (b == 10)
                {
                    Console.WriteLine();
                    b = 0;
                }
            }
            Console.ReadKey();
        }
    }
}
