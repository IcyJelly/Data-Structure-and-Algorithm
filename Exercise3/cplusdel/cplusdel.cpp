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
	vector<int>::iterator rm_position = vec.begin() + 3; 


	cout << "The orginial array printed in for loop\n" << endl;

	for ( int i = 0 ; i < length ; i++ ){

		cout << "Index: "<< i << " Value: " << vec[i] << endl;

	}

	vec.erase(rm_position);


	cout << "The orginial array printed in for loop\n" << endl;

	for ( int y = 0 ; y < vec.size() ; y++ ){

		cout << "Index: "<< y << " Value: " << vec[y] << endl;

	}


	Sleep(50000000);


	return 0;
}