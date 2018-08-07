/*
	Lab:  Lab Day 1 & 2 - 3
	Note: Two Numbers Sum, Avg., Product
	Date: 2/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

int main(){
	int x,y;
	
	cout << "Please enter the first number x: ";
	cin >> x; // User input for x
	cout << endl;
	
	cout << "Please Enter your second number y: ";
	cin >> y; // User input for y
	cout << endl;
	
	// Formatted Display
	cout << "Sum : x + y = " << x+y << endl;
	cout << "Average: (x + y)/2 = " << (float)(x+y)/2 << endl;
	cout << "Product: x * y = " << x*y << endl;
	
	return 0;
}