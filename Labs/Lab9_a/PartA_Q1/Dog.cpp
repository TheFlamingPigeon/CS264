/*
	Note: Lab Day 9&10 - Part A - Question 1 - Dog Class Function Decleration
	Date: 24/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include "Dog.h"
#include <iostream>
using namespace std;



/// Dog Class Functions
void Dog::bark(){ // Dog will bark
	cout << "Woof! " << name << " has barked." << endl;
}

void Dog::poop(){ // Dog wil poop
	cout << "Plop! " << name << " has pooped." << endl;
}

void Dog::dispDoggo(){ // Displays facts for that Doggo
	cout << "Name: " << name << endl;
	cout << "Dangerous: " << danger << endl;
	cout << "Age: " << age << endl;
}