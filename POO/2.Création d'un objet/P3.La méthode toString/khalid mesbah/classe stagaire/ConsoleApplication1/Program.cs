using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1 {
 class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("welcomme c#");
        stagaire yassine = new stagaire();
        yassine.nom = "khalid mesbah";
        yassine.age = 20;
        yassine.id = "221";
    }
}
public class stagaire
{
    public string nom;
    public int age;
    public string id;
}
}