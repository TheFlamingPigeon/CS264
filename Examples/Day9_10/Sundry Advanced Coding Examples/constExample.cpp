/*
Joe Duffin 7th of December 2017

This code uses the reserved word const in a number of contexts and tries to explain the significance 
of this use. For example, you will see const used in the arguments (parameters) of functions, you will 
see const used at the end of a function prototype and you will also see how const is used to set up 
constant value in your program.  The basic idea here is that if something is marked using const, 
then the compiler knows that when you wrote your function signature, you did not intend to alter the
value of the parameter in the body of the code. If you did this, having marked the variable as a const,
then the compiler generates and error to remind you about this. 

Look at the examples below, and activate the commented out code so that an error will be generated. 
Make sure that you only activate one line at a time before compiling your code.

Firstly, compile and run the program as it is without making any changes to the code.
Then systematically change one line at a time in the different methods, in order to 
get an understanding of the key word const and how it is used in different contexts within
this program.

I recommend that you take notes as you find things out while experimenting with this code.

*/

#include <iostream>

using namespace std;

const int MAX = 20;  // set up a constant to be used through out your program, this can not be changed in value.

/*
Key comment:

This Class Circle was created to illustrate a number of different concepts listed below
1) How to create static class variable and how it can be used to keep count of the number of object of a class that are createad 
and destroyed. This feature is important for the Signleton design pattern.
2) How the constructor and destructor of the class work.
3) How to use const to protect a class reference being used to erroneously change the values in an object of that class
4) How to use const to flag to the compiler that you are using a function that does not change the value of a parameter passed to it.
*/

class Circle {

  // There is only one variable named "count" created for your whole program, or the whole time that your 
  // program is up and running. All objects of type circle will share this variable.
  // Also, you do not need to create an instance of the Circle class to use the static function 
  // defined below that returns the value of the count variable. 
  
  static int count; // This will be used to keep track of the number of objects created. 

  int radius; 
  string name; 
 
 
 public:
  
    // There are two construtors defined for the Circle class which is termed constructor overloading. 
    Circle(){
		
		radius = 0;
		name = "unnamed";
		count++; // increase the count of the number of objects.
		cout << "(in the Constructor) : Creating this circle" << " named:  " << this->name << ", # of Objects created so far = " << count << endl; 
		
	}
	
	// Another way of writing a constructor with an initialising list after the constructor signature. 
	// We could write the next constructor as follows, (leaving out the code for incrementing count and printing its value). 
	// Circle(int r, string n): radius(r),name(n) {}
	// Where radius(r) and name(n) are called the initialiser list.
	// Note the list is comma separated, the format for passing values into member variables, and the use of the : after the constructor signature
	// before the intialiser list.
 
	Circle(int r, string n){
	
	    // Note: Remember the reserved word this is a pointer to the current object.
		this->radius = r; // setting the value of radius to the passed in value. The word this is not necessary here, just showing you how it is used.
		this->name = n;
		count++;  // increase the count of the number of objects.
		cout << "(in the Constructor) : Creating this circle" << " named:  " << this->name << ", # of Objects created so far = " << count << endl; 
	}
	
	~Circle(){
		
		cout << " (in the Destructor) Destroying this circle" << " named:  " << this->name << ", # of Objects existing now  = " << count << endl;  
		// This will be called implicitly when you use the delete key word on the object reference.
		count--; // decrease the count of the number of objects.
	}
	
	// We have to use the keyword const at the end of the function signatures 
	// of all or class functions that do not change the values in an object. 
	// We need to do this because if we write a method that takes a constant 
	// reference as a parameter and it then makes a call on this reference 
	// for a function in side the function body, even if this function does not change the value in an object, 
	// the compiler will generate and error in this case (puting const is necessary 
	// in prepartion for functions that take constant class parameters so that no error is generated)
	// For more information, see Chapter 7, Page 288, "Absolute C++" by Walter Savitch, 3rd edition 2008
	int getRadius() const{
		
		return this->radius;
	}
	
	void setRadius(int r){
		
		this->radius = r;
	}
	
	string getName() const{
		
		return this->name;
	}

	// Key comment: 
	
	// This function can be called by using the ClassName::getNumberOfObjects(), so you do not need to 
    // create an object of a particular class type inorder to use this method. (Of coure, you can still 
	// call this method using the object name and the . operator or -> operators as for normal functions).
    // You have seen this before in Java but notice that is C++ you use the ClassName and the scope resolution operator ::
    // in order to call the static class method getNumberOfObjects() 	
	static int getNumberOfObjects(){
		
		return count;
		
	}
	
	
}; // don't forget the semicolon ; at the end of the class


int Circle::count = 0; // NB: you must also define this static variable outstide the class. Try deactivating this line and see what happens.


void something(const int list[], int size){
	
	for (int i = 0; i<size; i++){
		
		// Activate the line of code below by removing the first // and recompiling to see what happens.
		//list[i] = 0; // This will generate a compiler error as the list array has been marked as constant (not to be changed.)
		
		cout << list[i] << endl; // This is fine as you are only printing out the list element to the screen while not changing it.
	}
} // end something	
	
void somethingElse(const Circle& myCircle){
	
	int x = myCircle.getRadius();
	cout << endl <<  x << " -- the value of the radius of this circle" << endl << endl; // This is ok as we are just reading out the radius and not changing it.
	
	// Activate the line of code below by removing the first // and recompiling to see what happens.
	//myCircle.setRadius(33); // This will not work as the myCircle parameter is marked as a constant so we will get a compiler error.
	
} // end somethinElse

void somethingNew(const int * number){
	
	// This is allowed because we are just reading a value. 
	cout << *number << " This is the value of the int variable whose address (pointer) has been passed to the function" << endl;
	
	// Activate the line of code below by removing the first // and recompiling to see what happens.
	//*number = 25; // This is not allowed as we are making a change to the variable pointed to by number;
	
} // end somethingNew

void somethingOld(const int & number){
	
    // This is allowed because we are just reading a value. 
	cout << number << " This is the value of the int variable whose address has been passed to the function" << endl;
	
	// Activate the line of code below by removing the first // and recompiling to see what happens.
	// number = 99; // This is not allowed as we are making a change to the variable pointed to by number;
	
} // end somethingOld 


int main(){

    int numbers [] = {1,3,7,9}; // declare and intialise an int array.
	something(numbers,4);
	
    int value = MAX;
    somethingNew(&value); // we pass the address of value to this function.
    cout << "The value is " << value << " in the main function " << endl;  	
	
	int num = MAX * 2;
	somethingOld(num);  // remember this function is designed to pass by reference 
	cout << "The value is " << num << " in the main function " << endl << endl; 
	
	/*
	Key comment:
	
	 So you might ask, why are we passing by reference or by pointer if we don't want to change the value of the variable pointed to?????? 
	 In otherwords why pass by reference and then mark the argument as a const, which tells the compiler not to allow you to change the value that is referenced?
	 The answer to this is as follows: 
	 You pass anything by pointer or by refernece for two reasons (1) It makes the code faster as you do not have to pass a large structure from one place to another
	 , can you imagine if you were passing a very large array by value instead of by reference? This would incurr a time cost for the cpu to carry out. (2) So you want 
	 to be able to use this mechanism described by (1) but you don't want to allow your code (accidentally) to change the contents of the variables or memory that you pass
	 by reference into a function.
	
	*/
	
	cout << endl;
	cout << "(0) The number of Circle objects in existence is : " << Circle::getNumberOfObjects() << endl;
	
	// Create two Circle objects from heap memory.
	// The pointers (address variables) mine and yours are located on the stack.
	Circle * mine = new Circle(7, "apple");
	Circle * yours = new Circle(88, "banana");
	// Creating an object on the stack memory
	Circle everyones(22, "pineapple");
	
	cout << endl;
	cout << "Circle named :" << mine->getName() << "  has a radius : " << mine->getRadius() << endl ;
	cout << "Circle named :" << yours->getName() << "  has a radius : " << yours->getRadius() << endl ;
	cout << "Circle named :" << everyones.getName() << "  has a radius : " << everyones.getRadius() << endl ;
	
	somethingElse(everyones); // This is to check if we are not trying to do something illegal due to the const parameter.
	
	cout << "Circle named :  " << mine->getName() << " has a radius of : " << mine->getRadius() << endl ;
	cout << "Circle named :  " << yours->getName() << " has a radius of : " << yours->getRadius() << endl ;
	
	cout << endl;
	cout << " (a) The number of Circle objects in existence is : " << mine->getNumberOfObjects() << endl;
	
	// Creating an array of "blank" objects on the stack
	// Each object will be created using the default constructor.
	Circle bubbles[5];  // Notice that the class constructor is invoked for each object created.
	

	cout << endl;
	cout << " (b) The number of Circle objects in existence is : " << Circle::getNumberOfObjects() << endl;
	cout << " About to delete heap objects " << endl;
	
	delete mine;   // deleting the heap object via its pointer
	delete yours;  // deleting the heap object via its pointer
	
	cout << endl;
	cout << " (c) The number of Circle objects in existence is : " << Circle::getNumberOfObjects() << endl;
	
	// Creating an array of objects on the heap. When you create on the heap, you need a pointer.
	// Each object will be created using the default constructor.
	Circle * stall = new Circle[5]; 
	
	cout << endl;
	cout << " (d) The number of Circle objects in existence is : " << Circle::getNumberOfObjects() << endl;
    cout << " About to delete heap objects " << endl;
	
	delete [] stall; // deleting the array of objects from the heap via the pointer.
	
	
	cout << endl;
	cout << " (d) The number of Circle objects in existence is : " << Circle::getNumberOfObjects() << endl;
	cout << " Anything else deleted from now on will be automatically deleted due to the program coming to an end"<< endl;
	
	// Although, we did not explicitly call the delete keyword on the array of circles, 
	// These will be deleted as the program terminates. 
	
} // end of the program.