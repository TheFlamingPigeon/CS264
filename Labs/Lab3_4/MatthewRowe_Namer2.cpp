/*
	Note: Finds the longest name
	Date: 4/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

#define LEN 7 // Global Length of Array

// Function Prototype
int lengthOfLongestName(string[]);

int main(){
	string namesList[ ] ={"Alison","Bob","Ciara","Desmond","Ellen","Frank","Gerard"};
	
	cout << "The longest name is: " << lengthOfLongestName(namesList) << endl;
	
	return 0;
}

// Runs through the array and determins the largest Name within
int lengthOfLongestName(string names[]){
	
	int big = names[0].length(); // Sets the first name to be the defult longest
	
	for(int i = 0; i < LEN; i++)
		if(big < names[i].length()) // Sees if each element is larger than the last
			big = names[i].length();
	
	return big;
}