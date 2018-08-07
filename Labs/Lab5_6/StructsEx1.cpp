/*
	Note: Lab Day 5 & 6 Problem 4 - Main File
	Date: 12/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

// Code copied from the slides
#include <iostream>
#include <string>

using namespace std;

struct customer {
	string name;
	customer *next;
	
};


void print_customers(customer &head) {
	customer *cur = &head;
	while (cur != NULL) {
		cout << cur->name << endl;
		cur = cur->next;
	}
}

int main() {
	customer customer1,customer2,customer3;
	customer1.next = &customer2;
	customer2.next = &customer3;
	customer3.next = NULL;
	
	customer1.name = "Jack";
	customer2.name = "Jane";
	customer3.name = "Joe";
	
	print_customers(customer1);
	return 0;
}