/*
	Note: Prints all the names in a given list
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

#define LEN 7 // Global Length of Array

// Function Prototype
void printAllNames(string[]);

int main(){
	string namesList[ ] ={"Alison","Bob","Ciara","Desmond","Ellen","Frank","Gerard"};
	
	printAllNames(namesList);
	
	return 0;
}

// Printd the names of a given string array
void printAllNames(string names[]){
	for(int i = 0; i < LEN; i++)
		cout << names[i] << " ";
	// New line at the end
	cout << endl;
}