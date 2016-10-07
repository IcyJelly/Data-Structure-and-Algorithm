using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cinsert {
    class Program {
        static void Main(string[] args) {

            int[] number = new int[]{1,3,5,7,8} ;
            int item = 10;
            int item_position = 3;
            int numelement = number.Length;
            int max_index = numelement - 1; 

            Console.WriteLine("The Original Array (printed in for loop)");

            for (int i = 0; i < numelement; i++) {
                Console.WriteLine("Index: {0} Value:{1}", i, number[i]);
            }

            int newnum = numelement + 1;
            int counter = 0;

            Array.Resize(ref number, newnum);
            
            while (max_index >= item_position) {
                number[max_index + 1] = number[max_index];
                max_index = max_index - 1;
            }

            number[item_position] = item;

            Console.WriteLine("");
            Console.WriteLine("The Appended Array (printed in while loop)");

            while (counter < newnum) {
                Console.WriteLine("Index: {0} Value:{1}", counter, number[counter]);
                counter = counter + 1;
            }
            


        }
    }
}
