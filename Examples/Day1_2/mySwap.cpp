/*
	Note: Temp Program
	Date: 3/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

void mySwap(int&, int&); // Pass-by-Reference Function

int main(){
	
	int a,b; // Variable allocation
	
	cout << "Please enter a value for A: ";
	cin >> a; // User input for A
	
	cout << "Please enter a value for B: ";
	cin >> b; // User input for b
	
	// Before Swap Display
	cout << "\nBefore Swap" << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	
	mySwap(a,b); // Swap call
	
	// After Swap Display
	cout << "\nAfter Swap" << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;	
	
	return 0;
}

void mySwap(int& x, int& y){
	// Switch Code Block
	int temp = x;
	x = y;
	y = temp;
	
	// In Swap Display
	cout << "\nIn Swap" << endl;
	cout << "A: " << x << endl;
	cout << "B: " << y << endl;
}

