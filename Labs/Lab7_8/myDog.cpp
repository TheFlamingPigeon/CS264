/*
	Note: Lab 7&8 - Part B - Question 2 - Dog Class 
	Date: 17/7/2018
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

/// ######################################### ///
// ########################################### //
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
	// system("PAUSE");
	return 0;
}

