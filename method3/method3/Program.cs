using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace method3
{
    class Program
    {
        static void Main()
        {
            int i = 0;
            SimpleMethod(ref i);
            Console.WriteLine(i);
        }
        
        public static void SimpleMethod(ref int j)
        {
            j = 43;
        }

        
    }
}
