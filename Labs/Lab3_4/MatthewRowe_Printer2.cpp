/*
	Note: Adds a given number to each element in a given array
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void printArray(int[], int);
void addToArrayContents(int[], int, int);


int main(){
	
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223};
	
	cout << "myDataList before addititon" << endl;
	printArray(myDataList, 11); // Print function call
	
	addToArrayContents(myDataList, 10, 11); // Array addition call
	cout << "\nmyDataList after adding 10 to each element" << endl;
	printArray(myDataList, 11); // Final Display
	
	return 0;
}


/*
	printArray will print the contents of an int array
	
	INPUT:  arr is the array you wish to print
			len is the length of the array arr
	OUTPUT: The conents of the array printed to the terminal
*/
void printArray(int arr[], int len){ // Beginning of print function
	for(int i = 0; i < len; i++){ // Itteration through Array
		cout << arr[i] << " ";
	}
	cout << endl;
} // End of printArray


/*
	printArray will print the contents of an int array
	
	INPUT:  arr is the array you wish to modify
			q is the value you wish to add to each element
			len is the length of the array
	OUTPUT: The conents of the array have all elements increased by 10
*/
void addToArrayContents(int arr[], int q, int len){ // Beginning of addToArrayContents
	for(int i = 0; i < len; i++){ // Itteration through Array
		arr[i] += q;
	}
} // End of addToArrayContents
