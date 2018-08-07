/* Joe Duffin 12th December 2017

This program illustrates the different types of memory managment in C++

Please note the use of pointers and delete, as well as the idea of using shared_ptr and 
how you can use the method .use_count on a shared pointer to keep track on how many 
pointers point to the same object in memory.

*/
#include <iostream>
#include <memory> 

using namespace std;

class MyClass {
	
		private: 
	
			int value; 
	
		public:
		
			MyClass(int x) : value(x) { 
			
				cout << " in the MyClass constructor: Member value is " << value <<": Now creating object " << endl;
			}
			~MyClass(){
				cout << " in the MyClass destructor: Member value is : " << value <<": Now Deleting object " << endl; 
			}
	
}; // end of the MyClass declaration

int main (){
	
	MyClass * p = new MyClass(5); // Creating a new MyClass object whose address is stored in the pointer p.
	// If we do not explicitly call  delete on the pointer p the desctructor will not be invoked?
	//delete p; // remove the comments to activate the previosly line of code.
	
	/* Alternatively we can use shared_ptr memory managemed way of automically freeing memory
	As you have seen before with C++, there are many ways of doing the same thing 
	both in terms of the C programming way and the upgraded C++ way */
	
	shared_ptr<MyClass> q(new MyClass(26));
	cout << q.use_count() << " pointer(s) to the this object" << endl; 
	
	shared_ptr<MyClass> temp1 = q; // temp1 points to the same object as q
	cout << q.use_count() << " pointer(s) to the this object" << endl; 
	
	shared_ptr<MyClass> temp2 = q; // temp2 points to the same object as q
	cout << q.use_count() << " pointer(s) to the this object" << endl; 
	
	// Each shared ptr to the same object keeps track of the other pointer to 
	// the same object. That is why each of them can be asked for a pointer count 
	// using .use_count
	cout << temp1.use_count() << " pointer(s) to the this object" << endl; 
    cout << temp2.use_count() << " pointer(s) to the this object" << endl; 
	
	shared_ptr<MyClass> r(new MyClass(27));
	shared_ptr<MyClass> s(new MyClass(28));
	
	// q,r ,and s will automatically call the destructor when the memory goes out of scope.
	// which in this case is at the end of this program.

	
} // end of the program.




