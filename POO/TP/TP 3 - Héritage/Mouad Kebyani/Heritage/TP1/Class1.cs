using System;
using System.Collections.Generic;
using System.Text;

namespace TP1
{
     public class Hopetals
    {
        public string Nom { get; set; }
        public object Code { get; set;}
        public int Id { get; set; }
        public Chombre chombre { get; set; }
        public void Hopetal()
        {
        }
        public Hopetals (string Nom , object Code , int Id)
      {
            this.Nom =  Nom;
            this.Code = Code;
            this.Id = Id;
      }
        public override string ToString()
        {
            return "Hopetal:" + Nom + "\n Code" + Code + "\n Id" + Id;
        }

    public override bool Equals(object obj)
    {
        Hopetals H = obj as Hopetals;
            if (H == null)
                return false;
            else return this.Id == H.Id;
    }

}
}
