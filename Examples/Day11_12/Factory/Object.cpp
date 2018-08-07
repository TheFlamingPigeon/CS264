/* Taken from http://cppnuts.com/factory-design-pattern-in-cpp/ */
/*

Class hierarchy :
Base Class is : Toy
Derived Classes are : Car, Bike, Plane

*/
#ifndef __io__
#define __io__
 
#include <iostream>
using namespace std;
 
#endif
 
class Toy {  // The abstract base class Toy
protected:  /// name and price can be accessed by derived classes as they are defined as protected.
	string name;
	float price;
public:
	virtual void prepareParts()  = 0;  // These are pure virtual functions, which makes this Toy class abstract.
	virtual void combineParts()  = 0;  // Each of these functions must be defined in each of the derived classes, Car, Bike, Plane.
	virtual void assembleParts() = 0;
	virtual void applyLabel()    = 0;
	virtual void showProduct()   = 0;
};
 
class Car : public Toy {  // Car is derived from abstract base class Toy
	// make all constructors private or protected!!
public:
	void prepareParts()  { cout << "Preparing Car Parts" << endl;}
	void combineParts()  { cout << "Combining Car Parts" << endl;}
	void assembleParts() { cout << "Assembling Car Parts" << endl;}
	void applyLabel()      { cout << "Applying Car Label" << endl;  name = "Car"; price = 10;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};
 
class Bike : public Toy { // Bike is derived from abstract base class Toy
	// make all constructors private or protected!!
public:
	void prepareParts()  { cout << "Preparing Bike Parts" << endl;}
	void combineParts()  { cout << "Combining Bike Parts" << endl;}
	void assembleParts() { cout << "Assembling Bike Parts" << endl;}
	void applyLabel()      { cout << "Applying Bike Label" << endl;  name = "Bike"; price = 20;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};
 
class Plane : public Toy { // Plane is derived from abstract base class Toy
	// make all constructors private or protected!!
public:
	void prepareParts()  { cout << "Preparing Plane Parts" << endl;}
	void combineParts()  { cout << "Combining Plane Parts" << endl;}
	void assembleParts() { cout << "Assembling Plane Parts" << endl;}
	void applyLabel()      { cout << "Applying Plane Label" << endl;  name = "Plane"; price = 30;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};