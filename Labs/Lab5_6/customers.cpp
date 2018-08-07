/*
	Note: Lab Day 5 & 6 Problem 5 & 6 - Implementation file
	Date: 12/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
#include <string>
#include "customers.h"

using namespace std;

// Prints all the customers names
void printCustomers(customer &head) {
	customer *cur = &head;
	while (cur != NULL) {
		cout << cur->name << endl;
		cur = cur->next;
	}
}

// Insers a name at the end of the LinkedList
void insertName(customer* head, string name){
	customer* temp = new customer;
	temp->name = name;
	temp->next = NULL;
	
	// Itterates through the list to the last node
	customer* cur = head;
	while(cur->next != NULL){
		cur = cur->next;
	}

	cur->next = temp;
}

// Returns the length of the Linked List
int currentLength(customer &head){
	int count = 0;
	customer *cur = &head;
	
	// Counts every element in the list
	while (cur != NULL) {
		count++;
		cur = cur->next;
	}
	return count;
}

// Used to make the head of the Linked List
customer* createList(string name){
	customer* c1 = new customer;
	c1->name = name;
	c1->next = NULL;
	return c1;
}