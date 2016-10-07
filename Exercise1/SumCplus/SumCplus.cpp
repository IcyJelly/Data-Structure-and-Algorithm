#include <iostream>
#include <iomanip>
#include <windows.h>


using namespace std; 

int main(){

	int a, b, c ; 

	cout << "Please enter the first number: ";
	cin >> a ;
	cout << "Please enter the second number: ";
	cin >> b ;
	c = a + b;
	cout << "The sum of " << a << " and " << b << " is " << c << endl ;

	Sleep(50000000);


	return 0 ;
}