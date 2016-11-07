using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharpUpdate {
    class Program {
        static void Main(string[] args) {

            int[] num = new int[] { 1, 3, 5, 7, 8 };

            int index = 3;

            int new_item = 10;

            Console.WriteLine("The original array printed in for loop");

            for (int counter = 0; counter < num.Length; counter++) {

                Console.WriteLine("Index: " + counter + " Value: " + num[counter]);


            }


            num[index] = new_item;

            Console.WriteLine("The changed array printed in for loop");

            for (int counter = 0; counter < num.Length; counter++) {

                Console.WriteLine("Index: " + counter + " Value: " + num[counter]);


            }

            
        }
    }
}
