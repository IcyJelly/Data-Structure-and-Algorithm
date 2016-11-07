/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaupdate;

/**
 *
 * @author Jerry Tse
 */
public class JavaUpdate {
     
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    
        int[] num = new int[]{1,3,5,7,8};
        
        int index = 3 ;
        
        int new_item = 10 ;
        
        System.out.println("The original array printed in for loop");
    
         for ( int counter = 0 ; counter < num.length; counter++){
        
            System.out.println("Index: "+ counter + " Value: "+ num[counter]);
        
        
        }
         
        num[index] = new_item; 
        
        System.out.println("The changed array printed in for loop");
        
        for ( int counter = 0 ; counter < num.length ; counter++){
            
            System.out.println("Index: "+ counter + " Value: "+ num[counter]);
               
            
        }
        
        
        
    }
    
}
