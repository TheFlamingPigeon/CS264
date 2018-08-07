/*
	Note: Lab Day 5 & 6 Problem 5 & 6 - Main File
	Date: 12/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
#include <string>
#include "customers.cpp"
//

using namespace std;

int main() {
	// Input String
	string input;
	
	// Creating the head of the list
	cout << "Enter end when you would like to display." << endl << endl;
	cout << "Enter a head name please: ";
	cin >> input;
	
	customer* head;
	head = createList(input);
	
	// Takes in names until 'end' is type
	while(true){
		cout << "Enter a name please: ";
		cin >> input;
		if(!input.compare("end"))
			break;
		
		insertName(head, input);
	}
	
	// Prints all customers in the list
	printCustomers(*head);
	
	return 0;
}