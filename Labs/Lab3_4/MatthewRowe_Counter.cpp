/*
	Note: Searches through and counts how many times a given value appears
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
int countOccurrences(int[], int, int);


int main(){
	
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223};
	int cVal = 223; // Value you wish to count

	// countOccurrences call
	int co = countOccurrences(myDataList, 11, cVal);
	
	cout << cVal << " appears " << co << " many times." <<endl;
	
	return 0;
}


/*
	countOccurrences takes a value search and counts how many times it appers 
		in arr[]
	
	INPUT:  arr[] is the array your searching through
			len is the length of array arr[]
			search is the value you are searching to count
	OUTPUT: The number of times search appers in arr[]
*/ 
int countOccurrences(int arr[], int len, int search){ // Begin countOccurrences
	int count = 0;
	for(int i = 0; i < len; i++){ // Itteration through Array
		if(arr[i] == search)
			count++; // Adds 1 to counter each time search is found in arr[]
	}
	return count; 
} // End countOccurrences