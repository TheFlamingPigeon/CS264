/*
	Note: Prints all elements in a given 2d array
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void print2DArray(int[][5]);

int main(){
	int my2DList[][5] = { {43,0,7,9,12}, {4,-5,8,17,99}, {-2,36,48,76,15} };
	
	// Proof of concept
	print2DArray(my2DList);
	
	return 0;
}

void print2DArray(int arr[][5]){
	
	for(int r = 0; r < 3; r++){
		for(int c = 0; c < 5; c++){
			cout << arr[r][c] << "\t"; // Prints each element followed by a tab
		}
		cout << endl; // Formatting
	}
	cout << endl; // Formatting
}// End of print2DArray