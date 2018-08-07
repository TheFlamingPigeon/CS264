// Joe Duffin 28th July 2018
/* Using object of type int to fill a vector container. */
/* Then use an iterator and a loop to start from the second element in the container and print out all the */
/* the elements of the container */

#include <iostream>
#include <vector>

using namespace std;

/// Dog Class
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
	~Dog() { /*cout << "R.I.P " << name << endl;*/ }
	
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
/// End of Dog Class

int main(){

	vector<Dog> Herd; // create a container of ints
	vector<Dog>::iterator p; // create an iterator that can be used to traverse the int container
 
	Herd.push_back(Dog()); // add an int object to the numberList container of int objects
	Herd.push_back(Dog("Guinness", false, 2018-1759));
	Herd.push_back(Dog("Sweety", true, 18));

 
	//cout << "Ignoring the first object in the container " << endl;
 
	for(p=Herd.begin();p!=Herd.end();p++){
		p-> dispDoggo();
		cout << endl;
	}
 
} // end of main



