// static members in classes
// Joe Duffin 23rd July 2018

#include <iostream>
using namespace std;

class Dummy {
  public:
    static int n;     // Step 1) need to this to declare a static member variable n
    Dummy () { n++; };// Every time the constructor is calles n is incrememted
	
	static int numOfObjects() { return n; }
};

int Dummy::n=0;  // Step 2) you also need to declare variable n outside of the class

int main () {
  Dummy a;		// Creating an Object on the stack
  cout << a.n << " : Number of objects in existence " << '\n';
  Dummy b[5];	// Creat 5 Objects on the stack
  cout << a.n << " : Number of objects in existence " << '\n';  // a) You can access the member variable in the normal way using the dot operator on the object.
  Dummy * c = new Dummy; // Create a new Dummy object from the heap
  cout << Dummy::n << " : Number of objects in existence " <<'\n'; // b) Shows that you don't need to instantiate an object of type Dummy to access the static class member n 
  
  // Static member function example
  cout << Dummy::numOfObjects() << endl; 
  
  delete c;
  return 0;
}

