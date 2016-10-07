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

	for ( int counter = 0; counter < length ; counter++ ){

		if ( counter == 2){

			cout << "Index:" << counter << " Value: " << vec[counter] <<endl;
		}

		if ( vec[counter] == 7){

			cout << "Index:" << counter << " Value: " << vec[counter] <<endl;

		}


	}


	Sleep(50000);

	return 0;
}