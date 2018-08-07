/*
	Note: Nested Loop Example
	Date: 4/7/2018
	Name: Matthew E. Rowe
*/


#include <iostream>
using namespace std;

// Function prototypes
int square(int);

// Global definition
#define LEN 10

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int arrarr[LEN];
	
	for(int i = 0; i < 10; i++){
		arrarr[i] = square(arr[i]);
	}
	
	for(int i = 0; i < LEN; i++){
		cout << arrarr[i] << " ";
	}
	cout << endl;
	
	return 0; // Everything is a o.k.
}

int square(int[] x){
	return x*x;
}


