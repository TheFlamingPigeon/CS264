/*
	Note: Adds a given value to every element in a 2d array then prints the array
	Date: 5/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void print2DArray(int[][5]);
void addValueToArray(int[][5], int);


int main(){
	int my2DList[][5] = { {43,0,7,9,12}, {4,-5,8,17,99}, {-2,36,48,76,15} };
	
	// Orginal Display
	cout << "Before Addition of 7:" << endl;
	print2DArray(my2DList);
	
	// Addition and Display after
	cout << "After Addition of 7:" << endl;
	addValueToArray(my2DList, 7);
	print2DArray(my2DList);
	
	return 0;
}

void print2DArray(int arr[][5]){
	
	for(int r = 0; r < 3; r++){
		for(int c = 0; c < 5; c++){
			cout << arr[r][c] << "\t"; // Prints each element followed by a tab
		}
		cout << endl; // Adds a new line after each row
	}
	cout << endl;
}// End of print2DArray

void addValueToArray(int arr[][5], int val){
	
	for(int r = 0; r < 3; r++){
		for(int c = 0; c < 5; c++){
			arr[r][c] += val; // Element wise addition
		}
	}
}// End of addValueToArray