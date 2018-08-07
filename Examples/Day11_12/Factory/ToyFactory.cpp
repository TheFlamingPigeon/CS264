/* Taken from http://cppnuts.com/factory-design-pattern-in-cpp/ */
/**
The ToyFactory 

Factory
*/
#ifndef __io__
#define __io__
 
#include <iostream>
using namespace std;
 
#endif
 
#include "Object.cpp"
 
class ToyFactory{
public:
    // createToy is a public static function, which means that it can be called using the class name (ToyFactory) 
	// and the ::, the scope resolution operator, without creating an instance of ToyFactory.
	// createToy returns a base type pointer of the class hierarchy containing base class Toy and derived classes
	// Car, Bike, and Plane. The int parameter provided to createToy will determine which type of object is created.
	static Toy * createToy(int type) {
	
	Toy *toy = NULL;  // initialise the toy pointer variable.
	
	switch(type) {
		case 1:{
			toy = new Car;  // create a Car object and link it to the toy base pointer.
			break;
		}
		case 2:{
			toy = new Bike; // create a Bike object and link it to the toy base pointer.
			break;
		}
		case 3:{
			toy = new Plane; // create a Plane object and link it to the toy base pointer.
			break;
		}
		default:{
			cout << "invalid toy type please re-enter type" << endl;
			return NULL;
		}
	}
 
    // Build parts of the toy object using calls to the appropriate version of 
	// the overridden virtual functions that were defined in the what ever derived class that was created
	// above in the switch statement.
 
	toy->prepareParts();
	toy->combineParts();
	toy->assembleParts();
	toy->applyLabel();
	
	return toy;
	}
	
};