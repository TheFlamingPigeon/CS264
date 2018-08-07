/*
	Note: Dog Class, in class example
	Date: 
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype

class Dog{
	string breed;
	bool danger;
	int age;
public:

	// Getter and Setters
	string getBreed();
	bool getDanger();
	int getAge();
	void setBreed(string);
	void setDanger(bool);
	void setAge(int);
	
	// Construct
	Dog();
	Dog(string, bool, int);
	~Dog();
	
	// Dog functions
	void bark();
	void poop();
	void disp();
};

Dog::Dog(){
	breed = "NULL";
	danger = 0;
	age = -1;
}

Dog::Dog(string b, bool d, int a){
	breed = b;
	danger = d;
	age = a;
}

Dog::~Dog(){
	cout << "The dog has died, RIP" << endl;
}

string Dog::getBreed(){	return breed; }

bool Dog::getDanger(){ return danger; }

int Dog::getAge(){ return age; }

void Dog::setBreed(string b){ breed = b; }

void Dog::setDanger(bool d){	danger = d; }

void Dog::setAge(int a){	age = a; }

void Dog::bark(){
	cout << "Woof! The dog has barked." << endl;
}

void Dog::poop(){
	cout << "Plop! The dog has pooped." << endl;
}

void Dog::disp(){
	cout << "Breed: " << breed << endl;
	cout << "Dangerous: " << danger << endl;
	cout << "Age: " << age << endl;
}

/// ######################################### ///
// ########################################### //
int main(){
	
	Dog singularity = Dog();
	Dog arthur = Dog("Guinness", false, 2018-1759);
	
	arthur.disp();
	singularity.disp();
	
	// system("PAUSE");
	return 0;
}

