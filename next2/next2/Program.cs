using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace next2
{
    class Program
    {
        static void Main(string[] args)
        {
            //loops
            /*for (int i = 0; i <= 5; i++)
            {
                Console.WriteLine(i);
            }*/
            int age = 23;
            switch (age)

                { 
                   case 23:
                    Console.WriteLine("mature");
                    break;
                   case 54:
                    Console.WriteLine("you are old ");
                    break;
                default:
                    Console.WriteLine("error input");
                    break;
                    
                }
                
               

                Console.ReadLine();
            
        }
    }
}
