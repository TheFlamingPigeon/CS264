/*
	Note: A Simple Swap Function for 2 ints
	Date: 3/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

int main(){
	
	int x, y, temp;
	
	cout << "Please enter a value for x: ";
	cin >> x; // User input for y value
	
	cout << "Please enter a value for y: ";
	cin >> y; // User input for x value
	cout << endl;
	
	// Initial display
	cout << "Before Swap" << endl; 
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	cout << endl;
	
	temp = x; // Saving the value of x for swap
	x = y; // Replacing value of x with y
	y = temp; // Replace value of y with saved x value, temp
	
	// Display after the swap
	cout << "After Swap" << endl;
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	
	return 0;
	
}