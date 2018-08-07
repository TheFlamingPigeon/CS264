/*
	Note: Lab Day 5 & 6 Problem 1
	Date: 10/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype


int main(){
	
	int len;
	cout << "Please enter the length of the Array: ";
	cin >> len;
	
	double arr[len];
	for(int i = 0; i < len; i++){
		cout << "Input element " << i << ": ";
		cin >> arr[i];
	}
	
	for(int i = len-1; i >= 0; i--){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	// system("PAUSE");
	return 0;
}