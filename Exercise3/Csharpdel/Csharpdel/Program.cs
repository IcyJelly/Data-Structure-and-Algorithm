using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Csharpdel {
    class Program {
        static void Main(string[] args) {

            int[] numbers = {1,3,5,7,8};
            int rm_item = 7;
            
            Console.WriteLine("The orginial array (Printed with for loop)\n");

            for (int i = 0; i < numbers.Length ; i++) {

                Console.WriteLine("Index: " + i + " Value: " + numbers[i]); 
            }

            List<int> number_list = numbers.ToList();
            number_list.Remove(rm_item);

            int counter = 0;

            Console.WriteLine("\nThe appended array (Printed with While Loop)\n");

            while (counter < number_list.Count) {

                Console.WriteLine("Index: " + counter + " Value: " + number_list[counter]);
                counter++;
            }


            

        }
    }
}
