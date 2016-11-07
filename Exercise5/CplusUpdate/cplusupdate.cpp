//Update Operation for C++ 

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <vector>

using namespace std;

int main(){

	vector<int> vec; 

	vec.push_back(1);
	vec.push_back(3); 
	vec.push_back(5);
	vec.push_back(7);
	vec.push_back(8);

	int length = vec.size();
	int update_index = 3;
	int update_item = 10; 


	cout << "The original array printed in for loop\n" << endl; 

	for ( int counter = 0 ; counter < length ; counter++){

		cout << "Index: " << counter << " Value: " << vec[counter] << endl;

	}

	vec[update_index] = update_item; 

	cout << "The updated array printed in for loop" << endl; 

	for ( int counter = 0 ; counter < length; counter++){

		cout << "Index: " << counter << " Value: " << vec[counter] << endl;
	}

	Sleep(50000);

	return 0; 
}