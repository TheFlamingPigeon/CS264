/*
	Note: Lab Day 5 & 6 Problem 5 & 6 - Header File
	Date: 12/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
#include <string>

using namespace std;

// Customer data structure
struct customer {
	string name;
	customer *next;
};

// Function Headers	
void printCustomers(customer&);
customer *createList(string);
void insertName(customer*, string);
int currentLength(customer&);