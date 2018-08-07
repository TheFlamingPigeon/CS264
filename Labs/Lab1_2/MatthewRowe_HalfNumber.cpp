/*
	Lab:  Lab Day 1 & 2 - 8 & 9
	Note: Function that prints a warning message
	Date: 2/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

/*
	printHalf simply prints half of aa given double
	
	INPUT:  a is the given double value
	OUTPUT: half of the given double is printed to the terminal
*/
void printHalf(double a){
	cout << "Half of " << a << " is " << a/2 << endl;
}

int main() {
	
	double q;
	cout << "Please Enter a floating point number: ";
	cin >> q; // User input
	
	// Function call
	printHalf(q);
	
	return 0;
}