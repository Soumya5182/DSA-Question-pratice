using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace method
{
    class Program
    {
        static void Main()
        {
            Program.Evennumber(20);

            Program r = new Program();
            int sum = r.Add(19, 32);
            Console.WriteLine(sum);
        }
        
        public int Add(int fn, int sn)
        {
            {

                return fn + sn;

            }
            Console.ReadLine();
        }




        public static void Evennumber(int target)
         {
             int start = 0;
             while(start<=target)
             {
                 Console.WriteLine(start);
                 start = start + 2;

             }



            Console.ReadLine();
        }

    }
    

}



