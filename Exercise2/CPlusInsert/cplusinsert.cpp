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
	int item = 10;
	vector<int>:: iterator position = vec.begin() + 3;
	int length = vec.size();
	int i;

	cout << "The array printed in for loop" << endl;

	for ( i = 0 ; i < length; i++){

		cout << "Index: " << i << " Value: " << vec[i] << endl;
	}

	vec.insert(position, item);

	int new_length = vec.size();

	cout << "The appended array printed in while loop" << endl;

	int counter = 0;

	while (counter < new_length ){

		cout << "Index: " << counter << " Value: " << vec[counter] << endl;
		counter++;
	}
	
	Sleep(50000000);


	return 0 ;
}