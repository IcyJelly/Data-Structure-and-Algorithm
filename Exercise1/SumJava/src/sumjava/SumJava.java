/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sumjava;
import java.util.Scanner;
/**
 *
 * @author Jerry Tse
 */
public class SumJava {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int a;
        int b;
        int c; 
        
        Scanner reader = new Scanner(System.in);
        System.out.print("Please enter the first number: ");
        a = reader.nextInt();
        System.out.print("Please enter the second number: ");
        b = reader.nextInt();
        
        c = a + b;
        
        System.out.println("The sum of " + a + " and " + b + " is " + c);
        
    }
    
}
