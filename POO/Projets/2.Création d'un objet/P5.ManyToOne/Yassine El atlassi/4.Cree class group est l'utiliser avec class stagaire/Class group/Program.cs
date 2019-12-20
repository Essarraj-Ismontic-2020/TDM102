using System;

namespace Class_group
{
    class Program
    {
        static void Main(string[] args)
        {
            Stagaire yassine;
            yassine= new Stagaire();
            yassine.name = "yassine El atlassi";
            yassine.age = 18;
            yassine.ID = "L5453";
            yassine.groupe = new Groupe();
            yassine.groupe.name = "TDM 102";
        }
    }
}
