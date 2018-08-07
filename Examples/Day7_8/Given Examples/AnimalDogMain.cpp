/**
Joseph Duffin 18th July 2018
This code contains the class definitions for an Animal class (super class) and a Dog class ( sub class).
The Dog class is said to inherit from the Animal class. The Dog class has a version of the printType function 
which overrides the printType function in its Animal parent class.  
Use this code experiment with inheritance and the use of pubic, private and protected access modifiers.
Also in the main function of this code you can see the creation of instances of the Animal class and instances of the Dog class (created from heap memory).
**/

#include <string>
#include <iostream>

using namespace std;

// Animal can be described as the base, super, or parent class, if we allow
// other classes to inherit from it.
class Animal{
   
   protected: 

   string colour; // Remember that this is a private variable.
   
   public:
   
   Animal (string c){ colour = c;}
   string getColour(){ return colour;}
   void setColour(string c) { colour = c;}
   void printType(){cout << "I am an Animal" << endl;}
  

}; // end of the Animal class


// The Dog class is a derived from the Animal base class and it can also be described as a sub class of the super class Animal class
// Notice the syntax to indicate that Dog class inherits from the Animal class.
class Dog : public Animal{

   int numberOfLegs;
   bool tailStatus; // does it have a tail?
   
   public : 
   Dog(int lg, bool t) : Animal ("Grey"){ numberOfLegs = lg; tailStatus = t;}  // In this line the Animal constructor is invoked to set its colour attribute.
   int getLegs(){return numberOfLegs;}
   void setLegs(int l){numberOfLegs = l;}
   bool checkTail(){return tailStatus;}
   void printType(){cout << "I am a Dog" << endl;}  // This printType function overrides the printType function from the Animal Class
   
   // We can use a public function (getColour() ) which is defined in the parent class 
   // in order to access a private attribute (colour) from the parent class.
   // void printColour(){cout << "I am " << getColour() << " in colour" << endl;}
   
   // The line below WILL work if the variable colour (in the Animal class) is declared protected.
   // If the variable colour is declared as private (default) then this line below will NOT work!!
   void printColour(){cout << "I am " << colour << " in colour" << endl;} 
   
   
}; // end of the Dog class

int main(){

	cout << "Hello Joe " << endl;
	Animal * A = new Animal("red"); // creating an Animal object from the heap
	A->printType();
	string colour = A->getColour();
	cout << "The colour of the animal is " << colour << endl;
	
	
	// Instance of the Dog class Derived from the Animal class
	// K9 is a Dog and K9 is also an animal (polymorphism)
	Dog * K9 = new Dog(4,false);  // creating an Dog object from the heap
	
	K9->printType();
	cout << "The colour of the dog is " << K9->getColour() << endl;
	cout << "The dog has " << K9->getLegs() << " legs " << endl;
	K9->printColour();
	

	delete A; // returning the object back to the heap 
	delete K9; // returning the dog object back to the heap
}