/*
	Note: Sums up the amount of character in an array of strings
	Date: 5/7/2018
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
	
	cout << "The character count is: " << lengthOfLongestName(namesList) << endl;
	
	return 0;
}

int lengthOfLongestName(string names[]){
	int big = names[0].length(); // Initial Value
	for(int i = 0; i < LEN; i++)
		big += names[i].length(); // Running total of character in each string
	
	return big;
}// End of lengthOfLongestName