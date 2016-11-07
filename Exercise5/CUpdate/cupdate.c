//Array Update Operation in C

#include <stdio.h> 
#include <windows.h>


int main(){

	int num[] = { 1,3,5,7,8 };
	int *pointer ;

	int length = sizeof(num)/sizeof(num[0]); 
	int update_index = 3;
	int update_item = 10 ; 

	printf("The original array printed in while loop\n");

	pointer = num; 

	int index = 0 ; 

	while ( pointer <= &num[ length - 1 ]){

		printf("Index: %d  Value: %d\n", index, *pointer);

		index++;
		pointer++;
	}

	//Update Operation
	num[update_index] = update_item; 

	printf("The updated array printed in for loop\n");
	int counter;
	for ( counter = 0 ; counter < length; counter++){

		printf("Index: %d  Value: %d\n", counter, num[counter]);

	}

	Sleep(50000);

	return 0 ; 
}