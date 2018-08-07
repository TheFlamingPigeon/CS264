/*
	Lab:  Lab Day 1 & 2 - 4
	Note: Three Numbers Sum, Avg., Product
	Date: 2/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	
	cout << "Please enter the first number x: ";
	cin >> x; // User input for x
	cout << endl;
	
	cout << "Please Enter your second number y: ";
	cin >> y; // User input for y
	cout << endl;
	
	cout << "Please Enter your third number z: ";
	cin >> z; // User input for z
	cout << endl;
	
	// Formatted display
	cout << "Sum : x + y + z = " << x+y+z << endl;
	cout << "Average: (x + y + z)/3 = " << (float)(x+y+z)/3 << endl;
	cout << "Product: x * y * z = " << x*y*z << endl;
	
	return 0;
}