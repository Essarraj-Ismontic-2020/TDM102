using System;
using System.Collections.Generic;
using System.Text;

namespace TP1
{
    public class Chombre
    {
        public string Nom { get; set; }
        public object Code { get; set; }
        public int Id { get; set; }
        public Hopetals Hopetal { get; set; }
        public void chombre()
        {
        }
        public Chombre (string Nom, object Code, int Id  )
      {
            this.Nom = Nom;
            this.Code = Code;
            this.Id = Id;
      }

    public override string ToString()
    {
            return this.Nom + "+" + this.Id;

    }
    public override bool Equals(object obj)
    {
        Chombre C = obj as Chombre;
            if (C == null)
                return false;
            else return this.Id == C.Id;
    }
}
}
