using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Myfirstproject
{
    class Voiture
       
{
        public string brand;
        public string color;
        private int privatespeed;
        public int speed
        {
            get
            {
                return privatespeed;
            }
            set
            {
                privatespeed = value;
            }
        }


        public void honk()
        {
            Console.WriteLine("biiiiippp !");
        }
        public bool speedlimit(int speed)
        {
            if (speed > 90)
                return false;
            else
                return true;
        }
        

    }
}
