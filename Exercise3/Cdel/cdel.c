#include <stdio.h>
#include <windows.h>

int main(){

	int numbers[] = {1,3,5,7,8};
	int rm_position = 3;
	int length = sizeof (numbers) / sizeof(numbers[0]);
	int *pointer; 

	pointer = numbers;
	int counter = 0;
	printf("The original array(Printed in while loop)\n");

	while ( pointer <= &numbers[4] ){
		printf ("Index: %d Value %d \n", counter, *pointer);
		counter++;
		pointer++;	
	}

	int new_nums[length-1];
	int i;

	for ( i = 0 ; i < length - 1; i++){

		if ( i >= rm_position){

			new_nums[i] = numbers[i+1]; 

		} else{
			new_nums[i] = numbers[i]; 
		}
		

	}

	int counter2 = 0 ;

	printf("The reduced array (Printed in while loop)\n");

	while ( counter2 <  length - 1  ){
		printf ("Index: %d Value %d\n", counter2, new_nums[counter2]);
		counter2++;
		
	}

	
	
	Sleep(50000);


	return 0;
}