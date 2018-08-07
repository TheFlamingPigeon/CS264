/*
	Note: function overloading
	Date: 10/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype
int addVal(int, int);
int addVal(int, int, int);

int main(){
	
	int a = 4; 
	int b = 1;
	int c = 10;
	int sum1 = addVal(a,b);
	int sum2 = addVal(a,b,c);
	
	cout << "a + b = " << sum1 << endl;
	cout << "a + b + c = " << sum2 << endl;
	
	
	// system("PAUSE");
	return 0;
}

int addVal(int x, int y){
	return x+y;
}

int addVal(int x, int y, int z){
	return x+y+z;
}
