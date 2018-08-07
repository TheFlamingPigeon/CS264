/*
	Lab:  Lab Day 1 & 2 - 6 & 7 & 10
	Note: Function that prints a warning message
	Date: 2/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

// Function Decleration - Prints a warning message
void printWarningMessage(){
	cout << "This is a Warning Message" << endl;
}

int main(){
	
	// Part 6 & 7 combined
	cout << "Part 6 & 7" << endl;
	printWarningMessage(); // Function call

	
	cout << "\n" << "Part 10" << endl;
	
	// Loop portion for part 10
	for(int i = 1; i<10; i++){
		cout << i << " : ";
		printWarningMessage();
	}
	
	return 0;
}