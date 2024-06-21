using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace method2
{
    class Program
    {
        static void Main(string[] args)
        {
            Program p = new Program();

            int sum = p.add(23, 31);
            Console.WriteLine(sum);
        }
        
        public int add(int ew,int ww)
        {
            return ew + ww;
        }
        
    }
    
}
