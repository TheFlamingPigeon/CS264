/*
	Note: Swap, Pass by Reference
	Date: 10/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void swap(int*, int*);


int main(){
	
	int x = 5;
	int y = 10;
	
	cout << "Before Swap" << endl;
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	
	cout << endl;
	swap(x, y);
	
	cout << "After Swap" << endl;
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	
	cout << endl;
	//system("PAUSE");
	return 0;
}

void swap(int* a, int* b){
	int* temp = a;
	a = b;
	b = temp;
}

void swap6point3(){
	int temp;
	
	temp = *x;
	*x = *y;
	
}