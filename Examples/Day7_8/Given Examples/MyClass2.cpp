#include <iostream>

using namespace std;
/*
Joe Duffin, July 12th 2015
In this example, we first define an object oriented class called MyClass and 
then we go on to use two differnt techniques to create instances (also known as 
objects) of MyClass.
(1) The MyClass definition has one class variable named y, (2) it has a public access 
MyClass constructor which takes one parameter (argument) in order to intitialise 
y, (3) and it is a setter and (4) getter method to set and get the value of y

In the main method we see two different ways (idioms) for creating  objects using the MyClass
class (a) and (b) (remember the cookie cutter is the class and the cookies are the objects).
 
(a) 
MyClass item1(5);
value = item1.getValue();

(b) 
MyClass * item2 = new MyClass(7);
result = item2->getValue();



*/
class MyClass {

 int y; // Class attribute

 public: 
 MyClass(int x){ y = x;}
 void setValue(int x){y = x;}
 int getValue(){return y;}

};  // notice the semicolon to end the class definition


int main (){

 int value;
 int result;

 // (a) 
 MyClass item1(5);   // Create a MyClass object, implictly using the MyClass constructor to create a new object named item1

 value = item1.getValue(); // access the getValue() method of the item1 object usign the "." dot operator

// (b) 
 MyClass * item2 = new MyClass(7); // Create a MyClass object, named item2 using the new key word followed by the MyClass constructor. This returns a pointer to a newly created object item2

 result = item2->getValue(); // access the getValue() method of the object pointed to by item2 using the "->" operator

 cout << "The value in the first newly created class (item1) is : " << value << endl; 

 cout << "The value in the second created class (item2) is : " << result << endl;

 return 0;

}
