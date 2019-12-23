using System;

namespace TP1
{
    class Program
    {
        static void Main(string[] args)
        {
            Hopetals Achifae = new Hopetals("Hopital Achifae",14, 15963);
            Chombre medecingeniral = new Chombre("chombre medecingeniral:",27,3698);
            Chombre Attente = new Chombre("Chombre d'attente:",44,1258);

            Console.WriteLine(Achifae.Nom+"\n*code : "+Achifae.Code+"\n*Id : "+Achifae.Id );
            Console.WriteLine("------------");
            Console.WriteLine(medecingeniral.Nom + " - code : " + medecingeniral.Code + " -Id : " + medecingeniral.Id);
            Console.WriteLine(Attente.Nom + " -code : " + Attente.Code + " -Id : " + Attente.Id);
        }
    }
}
