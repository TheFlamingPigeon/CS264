/*
	Note: Searches through an array and returns the largest value
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
int arrayContainsValue(int[], int, int);


int main(){
	
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223};
	int sVal;
	
	cout << "Please enter a vlaue you would like to search for in myDataList: ";
	cin >> sVal;
	cout << endl;
	
	int index = arrayContainsValue(myDataList, 11, sVal);
	
	cout << "The index of " << sVal << " in myDataList is " << index << endl;
	
	return 0;
}


/*
	arrayContainsValue takes a value, searches through an array, and returns the 
		index of where that specific value is located otherwise it returns -1
	
	INPUT:  arr[] is the array your searching through
			len is the length of array arr[]
			search is the value you are searching for
	OUTPUT: The first index of the searched value if it is contained in the list 
			or -1 if the value does not exist
*/ 
int arrayContainsValue(int arr[], int len, int search){ // Begin arrayContainsValue
	
	for(int i = 0; i < len; i++){ // Itteration through Array
		if(arr[i] == search)
			return i; // Returns the proper index of search in arr[]
	}
	return -1; // Returns -1 if the search is not found in arr[]
} // End arrayContainsValue