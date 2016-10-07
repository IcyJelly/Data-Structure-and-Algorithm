#include <stdio.h>
#include <windows.h>

int main(){

	int name[] = {1,3,5,7,8} ; 

	int index = 2 ;  //Search for value 5  

	int value = 7 ;  //Search for value 7

	int length = sizeof(name)/sizeof(name[0]);

	int *p; 


	p = name;


	int counter = 0;



	while ( p <= &name[4]){

		if ( p == &name[index]){

			printf("Value of %d is %d \n", index, *p );

			
		}


		if ( *p == value){

			printf("Index: %d Value %d \n", counter, *p);
		}
		
 		counter++;
		p++;


	}





	Sleep(50000);


	return 0;
}