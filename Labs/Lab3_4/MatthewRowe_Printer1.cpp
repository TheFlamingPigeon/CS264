/*
	Note: Prints out all the elements in a given list
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void printArray(int[], int);


int main(){
	
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223};
	
	cout << "myDataList = ";
	printArray(myDataList, 11); // Print function call
	cout << endl;
	
	return 0;
}


/*
	printArray will print the contents of an int array
	
	INPUT:  arr is the array you wish to print
			len is the length of the array arr
	OUTPUT: The conents of the array printed to the terminal
*/
void printArray(int arr[], int len){ // Beginning of print function
	for(int i = 0; i < len; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
} // End of printArray Function