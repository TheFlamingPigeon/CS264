//listing 15
#include <iostream> 
using namespace std; 
 
class B { 
public: 
  B() { cout << "Constructing base portion\n"; } 
  ~B() { cout << "Destructing base portion\n"; } 
}; 
 
 // This inheartes all the function in class B
class D: public B { 
public: 
  D() { cout << "Constructing derived portion\n"; } 
  ~D() { cout << "Destructing derived portion\n"; } 
}; 
 
int main() 
{ 
	// Shows the order of construction whn creating inhearted objects
	//D ob; 
	//system("pause");
	D *squirrel = new D;
	system("pause");
	delete(squirrel);
	// do nothing but construct and destruct ob 
 
  return 0; 
}