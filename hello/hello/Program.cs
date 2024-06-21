using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        { 
            /*data types in c#
             integer -int soumya;----4 byte;
            floating point number- float a;--------4 byte 
            long-long soumya;------8 bytes
            double -double soumya;-------8 bytes
            character-char a='A';------2 byte
            boolean-bool isGreat=true;---------1bit 
            string-string inp="soumya";-------2 bytes per character 
            */
            /* int a = 35;
             float b = 32.4F;
             double c = 424242.4D;
             string e="soumyaranaj";
             Console.WriteLine(a);
             Console.WriteLine(b);
             Console.WriteLine(c);
             Console.WriteLine(e);
             int age = 10;
             Console.WriteLine("my age is=" + age);
             Console.WriteLine("hello world");
             Console.WriteLine("soumyaranjan routray");
             //Console.ReadLine();
             /*type casting
              1-implicit typecasting 
             --------------------------

             2-explicit typecasting */
            //1-pmplicit typecasting
            /* int x = 10;
             double y = x;
             int z = 'y';
             Console.WriteLine(x);
             Console.WriteLine(y);
             Console.WriteLine(z);

             //explict typecasting 
            /* int m =(int ) 12.3;
             Console.WriteLine(m);
             //conversion
             float varr =Convert.ToInt32( 3.54);
             //take user input
             Console.WriteLine("enter your name");
             string nm = Console.ReadLine();
             Console.WriteLine("hii" + nm);
             Console.WriteLine("how much chandy do you need");
             string can = Console.ReadLine();
             Console.WriteLine("you will get 4 or more amday" +(Convert.ToInt32( can) + 4));
             //opearor
             int f = 23;
             int n = 43;
             Console.WriteLine("addition of f and n" + (f + n));
             int a3 = Math.Min(23, 53);
             Console.WriteLine(a3);*/
            //string 
            /* String liku = "soumyaranjan routray";
             Console.WriteLine(liku.Length);
             Console.WriteLine(liku.ToUpper());
             Console.WriteLine(liku.ToLower());
             Console.WriteLine(liku.IndexOf("routray"));
             Console.WriteLine(liku[4]);
             //string interplution
             string nm = Console.ReadLine();
             string can = Console.ReadLine();
             Console.WriteLine($"my name is {nm}.i want {53} candy");*/
            //decision controal
            /* Console.WriteLine("enter your age");
             string ages = Console.ReadLine();
             int agess = Convert.ToInt32(ages);
             if(agess<10)
             {
                 Console.WriteLine($"your age is{agess} you are child");
             }
             else if(agess>30)
             {
                 Console.WriteLine($"your age is{agess} you can drive now");
             }
             else
             {
                 Console.WriteLine("you defined wrong");
             }*/
            //loops
            /*int i = 0;
            while (i < 5) 
            {
                Console.WriteLine(i);
                i++;
            }*/
            |/* int k = 0;
            do
            {
                Console.WriteLine(k);
                k++;
            }
            while (k < 5);*/



            Console.ReadLine();



        }
    }
}