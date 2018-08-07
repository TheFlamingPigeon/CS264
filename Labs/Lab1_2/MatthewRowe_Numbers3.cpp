/*
	Lab:  Lab Day 1 & 2 - 5
	Note: Choose the larger of two entered numbers
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
	
	// Logical compare and formatted display
	if(x > y)
		cout << x << " is the larger of the two numbers." << endl;
	else
		cout << y << " is the larger of the two numbers." << endl;
	
	return 0;
}