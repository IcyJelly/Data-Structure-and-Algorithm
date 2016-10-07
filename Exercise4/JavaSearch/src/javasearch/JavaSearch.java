/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javasearch;

/**
 *
 * @author Jerry Tse
 */
public class JavaSearch {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int[] name  = new int[]{1,3,5,7,8};
        
        for ( int i = 0; i < name.length ; i++ ){
            
            if ( i == 2 ){
                System.out.println("Index:"+ i + " Value: "+ name[i]);
            }
            
            if ( name[i] == 7 ){
                
                System.out.println("Index:"+ i + " Value: "+ name[i]);
            }
        }
        
        
        
    }
    
}
