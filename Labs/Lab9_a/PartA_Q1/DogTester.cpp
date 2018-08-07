/*
	Note: Lab Day 9&10 - Part A - Question 1 - Dog Class Tester File
	Date: 24/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include "Dog.h"
#include <iostream>
using namespace std;

int main(){
	
	Dog singularity = Dog();
	Dog arthur = Dog("Guinness", false, 2018-1759);
	
	cout << endl;
	
	arthur.bark();
	singularity.poop();
	
	cout << endl;
	
	arthur.dispDoggo();
	cout << endl;
	singularity.dispDoggo();
	
	cout << endl;
	system("PAUSE");
	return 0;
}
