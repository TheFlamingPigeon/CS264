/*
	Note: Pointer Examples
	Date: 5/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
void myFunction();

int main(){
	
	int andy, fred, *ted;
	ted = &andy;
	andy = 37;
	fred = *ted;
	cout << endl << fred << endl;
	
	return 0;
}