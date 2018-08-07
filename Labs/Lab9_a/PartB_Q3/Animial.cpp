/*
	Note: Lab Day 9, 10, and 11 - Part B Q3
	Date: 2/8/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Base animal calss definition
class Animal{
	string animalCatagory;
	string animalSound;
	
public:
	// Constructors
	Animal() { animalCatagory = "undefined"; animalSound = "undefined"; }
	Animal(string cat, string sound) { animalCatagory = cat; animalSound = sound; }
	
	// Getters and Setters
	string getAnimalCatagory() { return animalCatagory; }
	string getAnimalSound() { return animalSound; }
	void setAnimalCatagory(string cat) { animalCatagory = cat; }
	void setAnimalSound(string sound) { animalSound = sound; }
	
	virtual void describeIdentity() { cout << "I am simply an Animal" << endl; }
};

// Horse Class inhearted from Animal Class
class Horse : public Animal{

public:
	// Constructors
	Horse():Animal() {}
	Horse(string cat, string sound) : Animal(cat, sound) {}
	
	void describeIdentity() { cout << "I am a Horse" << endl; }
};

// Mouse Class inhearted from Animal Class
class Mouse : public Animal{

public:
	// Constructors
	Mouse():Animal() {}
	Mouse(string cat, string sound) : Animal(cat, sound) {}
	
	void describeIdentity() { cout << "I am a Mouse" << endl; }
};

// Dog Class inhearted from Animal Class
class Dog : public Animal{
	int numDogBiscuitsEaten;
public:
	// Constructors
	Dog():Animal() { numDogBiscuitsEaten = 0; }
	Dog(string cat, string sound) : Animal(cat, sound) { numDogBiscuitsEaten = 0; }
	
	void describeIdentity() { cout << "I am a Dog" << endl; }
	
	// Getters
	int getNumDogBiscuitsEaten() { return numDogBiscuitsEaten; }
	
	// Dog Function
	void eatDogBiscuit() { numDogBiscuitsEaten++; }
};

// Cat Class inhearted from Animal Class
class Cat : public Animal{

public:
	// Constructors
	Cat():Animal() {}
	Cat(string cat, string sound) : Animal(cat, sound) {}
	
	void describeIdentity() { cout << "I am a Cat" << endl; }
};

// Tiger Class inhearted from Animal Class
class Tiger : public Animal{

public:
	// Constructors
	Tiger():Animal() {}
	Tiger(string cat, string sound) : Animal(cat, sound) {}
	
	void describeIdentity() { cout << "I am a Tiger" << endl; }
};


int main(){
	
	// Creation of Required Objects
	Horse h1 = Horse();
	Cat c1 = Cat("Mittens the Kittens", "Meow");
	Dog d1 = Dog("Beer", "Woof");
	Tiger t1 = Tiger();
	Tiger t2 = Tiger("Food", "SIZZZZZLE");
	
	// Display of differernt Derived animal funstions
	cout << "Cat Getter" << endl;
	cout << c1.getAnimalSound() << endl << endl;
	
	cout << "Tiger 1 Getter" << endl;
	cout << t2.getAnimalSound() << endl << endl;
	
	cout << "Tiger 2 Getter" << endl;
	cout << t1.getAnimalSound() << endl;
	cout << t1.getAnimalCatagory() << endl << endl;
	
	t2.setAnimalSound("Purr");
	cout << "Tiger 1 after change" << endl;
	cout << t2.getAnimalSound() << endl << endl;
	
	// Dog Function Testing
	d1.eatDogBiscuit();
	d1.eatDogBiscuit();
	d1.eatDogBiscuit();
	cout << "Dog Function Calls" << endl;
	cout << d1.getAnimalCatagory() << endl;
	cout << d1.getAnimalSound() << endl;
	cout << d1.getNumDogBiscuitsEaten() << endl;
	
	// Creating an array of different animals
	Animal *arr[5];
	arr[0] = new Dog("Doggo", "Woof");
	arr[1] = new Horse();
	arr[2] = new Mouse();
	arr[3] = new Cat();
	arr[4] = new Horse();
	
	// Displaying said array
	for(int i = 0; i < 5; i++){
		arr[i]->describeIdentity();
	}
	
	// system("PAUSE");
	return 0;
}

