#include <stdio.h>
#include <windows.h>
int main(){

	int a, b, c ;

	printf ("Please enter the first number: ");
	scanf ("%d",&a);
	printf ("Please enter the second number: ");
	scanf ("%d", &b);

	c = a + b ;

	printf("The sum of %d and %d is %d",a,b,c);

	Sleep(5000000);
	return 0;
}