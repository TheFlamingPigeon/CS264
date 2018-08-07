/*
	Note: Prints the longest name in a given array of strings
	Date: 5/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

#define LEN 7 // Global Length of Array

// Function Prototype
string getLongestName(string[]);

int main(){
	string namesList[ ] ={"Alison","Bob","Ciara","Desmond","Ellen","Frank","Gerard"};
	
	cout << "The longest name is: " << getLongestName(namesList) << endl;
	
	return 0;
}

string getLongestName(string names[]){
	int index = 0; // Will keep track of the index of the longest name
	int big = names[0].length(); // Sets the first name to be the defult longest
	
	for(int i = 0; i < LEN; i++)
		if(big < names[i].length()){
			big = names[i].length(); // Sees if each element is larger than the last
			index = i;
		} 
			
	return names[index];
}
