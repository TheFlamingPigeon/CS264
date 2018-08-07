/*
Joe Duffin July 2015

This program will show you some aspects of pointers (a pointer is a variable designed to 
hold the memory address location of another variable of a certain type).
It is important to know:
1) the * operator and how it is used in declaring pointers.
2)`the & operator adn how it is used to examine a variable and access its address location
3) the * operator and how it is used to get to a variable's contents indireclty through a pointer variable.

*/
#include <iostream>

using namespace std;



int main(){

 int x = 17;  // declare and initialise a variable x
 
 int* y;      // declare a pointer variable y which is capable of storing the address of an integer variable.

 y = &x;      // store the address of x in the pointer variable y

 cout << "The value of x is : " << x << endl;
 cout << "The memory address of x is : " << &x << " and again " << y << endl;
  
 // using the * operator to indirectly access a variable or to dereference the pointer y
 // *y means go to the address stored in y and retrieve the value there.
 
 cout << "The value of x is (through accessing the pointer variable y): " << *y << endl;


 return 0;
}
