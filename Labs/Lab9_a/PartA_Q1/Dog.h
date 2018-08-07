/*
	Note: Lab Day 9&10 - Part A - Question 1 - Dog Class Header File
	Date: 24/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;


class Dog{
	string name;
	bool danger;
	int age;
	
public:

	// Getter and Setters
	string getName(){	return name; }
	bool getDanger(){ return danger; }
	int getAge(){ return age; }
	void setName(string b){ name = b; }
	void setDanger(bool d){ danger = d; }
	void setAge(int a){ age = a; }
	
	// Construct
	Dog() { name = "NULL"; danger = 0; age = -1; }
	Dog(string n, bool d, int a) { name = n; danger = d; age = a; }
	~Dog() { cout << "R.I.P " << name << endl; }
	
	// Dog functions
	void bark();
	void poop();
	void dispDoggo();
};

