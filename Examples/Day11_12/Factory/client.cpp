/* Taken from http://cppnuts.com/factory-design-pattern-in-cpp/ */
/*
The client: The code that uses the ToyFactory to create different objects.
The client does not know about the mechanics of creating a particular object.
This is said to be hidden from the client by the factory design pattern mechanism.
*/
#ifndef __io__
#define __io__
 
#include <iostream>
using namespace std;
 
#endif
 
#include "ToyFactory.cpp"
 
int main() {
// client code starts
// We will create objects at run time depending on what we 
// choose by the number that we input.

	int type;
	while(1){
		cout << endl << "Enter type or Zero for exit" << endl;
		cout << "1) for Car " << endl;
		cout << "2) for Bike " << endl;
		cout << "3) for Plane " << endl;
		cin >> type;
		if(!type)
			break;
		Toy *v = ToyFactory::createToy(type);  // calling the createToy public static function of the ToyFactory class
		if(v){
			v->showProduct();
			delete v;
		}
	}
	cout << "Exit.." << endl;
// client code ends
	return 0;
}