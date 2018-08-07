/*
	Note: Change Array Contents Example
	Date: 4/7/2018
	Name: Matthew E. Rowe
*/


#include <iostream>
using namespace std;

// Function prototypes
void changeArr1(int[]);
void changeArr2(int[]);
void printArr(int[]);

// Global definition
#define LEN 10

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	// Replacing the elements with 99
	cout << "Orginal Array" << endl;
	printArr(arr); // Print Orginal Array
	changeArr1(arr); // Changes the contents of the array arr
	cout << "Updated Array" << endl;
	printArr(arr); // Print Updated Array
	
	cout << endl;
	
	// Replacing the elements with a new arraycout << "Orginal Array" << endl;
	printArr(arr); // Print Orginal Array
	changeArr2(arr); // Changes the contents of the array arr
	cout << "Updated Array" << endl;
	printArr(arr); // Print Updated Array 
	
	return 0; // Everything is a o.k.
}

// Replacing the elements of an array with 99
void changeArr1(int x[]){
	
	for(int i = 0; i < LEN; i++){
		x[i] = 99;
	}
}

// Replacing the elements passed to it with the local array
// thats defined in the function itself
void changeArr2(int x[]){
	int newArr[] = {10,9,8,7,6,5,4,3,2,1};
	
	for(int i = 0; i < LEN; i++){
		x[i] = newArr[i];
	}
}

// Array passed in by reference for printing
void printArr(int q[]){
	for(int i = 0; i < LEN; i++){
		cout << q[i] << " ";
	}
	cout << endl;
}
