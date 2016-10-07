/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javainsert;
import java.util.*;
/**
 *
 * @author Jerry Tse
 */
public class JavaInsert {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        ArrayList<Integer> number = new ArrayList<>();
        number.add(1);
        number.add(3);
        number.add(5);
        number.add(7);
        number.add(8);
        
        //int[] number = new int[]{1,3,5,7,8};
        int item = 10;
        int position = 3;
        int numelement = number.size();
        int counter = 0;
        System.out.println("The orginal array (Printed in For Loop) \n");
        
        for (int i=0; i<numelement; i++){
            System.out.format("Index: %d  Value: %d%n", i, number.get(i));
        }
         
        number.add(position, item);
        int newnum = number.size();

        System.out.println("\nThe appended array(Printed in while loop) \n");
        
        while (counter < newnum ){
            System.out.format("Index: %d  Value: %d%n", counter, number.get(counter));
            counter = counter + 1;
            
        }
        
        
        
        
        
        // TODO code application logic here
    }
    
}
