using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharpSearch {
    class Program {
        static void Main(string[] args) {

            int[] num = new int[] { 1, 3, 5, 7, 8 };

            for (int counter = 0; counter < num.Length; counter++) {

                if (counter == 2) {

                    Console.WriteLine("Index: " + counter + " Value:" + num[counter]);              
                }

                if (num[counter] == 7) {

                    Console.WriteLine("Index: " + counter + " Value:" + num[counter]);
                }


            }
        }
    }
}
