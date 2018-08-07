// list 16
// A short example that uses a virtual function
// Annotated by Joe Duffin 23rd July 2018
 
#include <iostream> 
using namespace std; 
 
class B { 
public: 
  virtual void who() { // specify a virtual function 
    cout << "Base\n"; 
  } 
}; 
 
class D1 : public B { 
public: 
  void who() { // redefine who() for D1  
    cout << "First derivation\n"; 
  } 
}; 
 
class D2 : public B { 
public: 
  void who() { // redefine who() for D2 
    cout << "Second derivation\n"; 
  } 
}; 
 
int main() 
{ 
  B base_obj; // base_obj is an instance of the base class (parent or super class)
  B *p;   // p is a pointer that can store the address of a Base class
  D1 D1_obj; // D1_obj and D2_obj are instances of the derived classes D1 and D2 respectively (derived from the base class B)
  D2 D2_obj; 
 
  p = &base_obj;  // p takes the address of the base_object
  p->who();  // access B's who 
 
  p = &D1_obj; // p takes the address of the derived class instance.
  p->who(); // access D1's who (the compiler can work this out using the type of the pointed to object)
 
  p = &D2_obj; // p takes the address of the second derived class instance
  p->who();  // access D2's who (the compiler can work this out using the type of the pointed to object)
   
  return 0; 
}



