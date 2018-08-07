/*
	Note: Searches through an array and returns the largest value
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
int linearSearchForLargest(int[], int);


int main(){
	
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223};
	
	int largest = linearSearchForLargest(myDataList, 11);
	cout << "The largest element in myDataList is: " << largest << endl;
	
	return 0;
}


/*
	linearSearchForLargest returns the largets value in a given array
	
	INPUT:  arr is the array I am searching through
	OUTPUT: the largest element in the array arr
*/
int linearSearchForLargest(int arr[], int len){
	
	int hold = arr[0];
	for(int i = 0; i < len; i++){ // Itteration through Array
		if(hold < arr[i])
			hold = arr[i];
	}
	return hold;
} // End of linearSearchForLargest
