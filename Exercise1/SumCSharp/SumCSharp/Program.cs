using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * # Adding two integers from users and display the value 
 * # Step 1 : Start
 * # Step 2 : Declare three variables a,b,c
 * # Step 3 : Get the value of a and b
 * # Step 4 : Add a and b
 * # Step 5 : Store the output of step 4 in c
 * # Step 6 : print c

*/

namespace SumCSharp {
    class Program {
        static void Main(string[] args) {
            
            int a;
            int b;
            int c;

            Console.Write("Please enter your first number: ");
            a = int.Parse(Console.ReadLine());

            Console.Write("Please enter yout second number: ");
            b = int.Parse(Console.ReadLine());

            c = a + b;

            Console.WriteLine("The sum of " + a + " and " + b + " is " + c);
            




            
        }
    }
}
