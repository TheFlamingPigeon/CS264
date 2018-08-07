/*
	Note: Lab Day 5 & 6 Problem 2: Dynamic Array allocation
	Date: 10/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void resize();
void printArr();

// Global Variables
int len = 5; 	// Max Length of the Array
int size = 0;	// Numbers entered
int* arr = new int[len];

int main(){
	
	int n = 0; // Input number
	
	// Collects inout until -1 is entered
	while(n != -1){
		if(size == len)
			resize();
		
		cout << "Insert Element " << size << ": ";
		cin >> arr[size];
		
		n = arr[size];
		size++;
	}
	
	// Prints the array in reverse
	for(int q = size-2; q >= 0; q--){
		cout << arr[q] << " ";
	}
	
	return 0;
}

// Overflow help doubling in size each resize
void resize() {
    int newLen = len * 2;
    int* newArr = new int[newLen];

    memcpy( newArr, arr, len * sizeof(int) );
	
	// Makes sure there are no memory leeks
    len = newLen;
    delete [] arr;
    arr = newArr;
}


// Used for testing - Not needed
void printArr(){
	for(int q = 0; q < size; q++){
		cout << arr[q] << " ";
	} cout << endl;
	//cout << len << endl;
}