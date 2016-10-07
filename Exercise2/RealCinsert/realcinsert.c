#include <stdio.h>
#include <windows.h>
int main(){
	int name[] ={1,3,5,7,8};
	int item = 10 ;
	int position = 3;
	int number_element = sizeof(name)/sizeof(name[0]);
	int max_index = number_element - 1 ;
	int i;
	int *pointer;
	
	pointer = name;

	printf("The original array(Printed in for loop)\n");
	for (i = 0; i<number_element;i++){
		printf ("Index:%d Value:%d\n", i ,*pointer);
		pointer++;
	}

	

	while (max_index>= position){

		name[max_index + 1] = name[max_index];
		max_index = max_index - 1 ;

	}

	
	name[position] = item;

	

	printf("\nThe Appended Array(Printed in while loop)\n");

	
	int counter = 0;



	while (counter < 6){
		printf ("Index:%d Value:%d \n",counter, name[counter]);
		counter++;
	}


	Sleep(50000);
	return 0;
}