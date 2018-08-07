/*
	Note: Swaps two int values
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void my_swap(int&,int&);


int main(){
	
	// Variable decloration 
	int x,y;
	
	cout << "Please enter a value for x: ";
	cin >> x; // X value input
	
	cout << "Please enter a value for y: ";
	cin >> y; // Y value input
	cout << endl;
	
	// Function call
	my_swap(x,y);
	
	// Final Display
	cout << "After Swap" << endl;
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	
	return 0;
}


/*
	my_swap takes two int values and swaps them by passing their reference value
	
	INPUT:  x is one value you wish to swap
			y is the other value you wish to swap
	OUTPUT: the values at each variable will be switched
*/
void my_swap(int& x, int& y){ // Beginning of swap function decloration
	int temp = x;
	x = y;
	y = temp;
} // End of swap function