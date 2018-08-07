/*
	Note: Lab Day 5 & 6 Problem 2: Array of Structs
	Date: 10/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype


struct person{
	int age;
	string name;
};


int main(){
	
	// Define the length of the list
	int len;
	cout << "How many people would you like to enter: ";
	cin >> len;
	
	// Allocates the specified amount of memory for the people
	person* peeps = new person[len];
	
	// Collects data from the user and stores it in the array
	for(int q = 0; q < len; q++){
		
		string n;
		int a;
		
		// Input formatting
		cout << "Person " << q+1 << endl;
		cout << "Name: ";
		cin >> n;
		cout << "Age:  ";
		cin >> a;
		
		person it;
		it.age = a;
		it.name = n;
		
		// Adds the person it to the list
		peeps[q] = it;
		cout << endl;
	}
	
	// Prints the name in reverse
	for(int q = len-1; q >= 0; q--){
		cout << peeps[q].name << " is " << peeps[q].age << " years old" << endl;		
	} cout << endl;
	
	// system("PAUSE");
	return 0;
}

