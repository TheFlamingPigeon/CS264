// Updated July 18th 2018
//This file is: RectangleTester.cpp
#include<iostream>
#include "Rectangle.h"

/*
 The order of compiling and running the associated files.
 The Rectangle.cpp file contains the definition of the class, i.e. the attributes and the function prototypes.
 The Rectangle.h file contains the implementation of the Rectangle class functions (using the Rectangle using :: before the functio
 The Rectangle.cpp contains the include directive for #include "Rectangle.h"
 The RectangleTester.cpp contains the include directive for #include "Rectangle.h"
 
 1) g++ -c Rectangle.cpp   // consumes the header file Rectangle.h, containing the implementations of the Rectangle class functions
 2) g++ -o Rect RectangleTester.cpp Rectangle.o
 3) ./Rect
*/

using namespace std;

int main () {
  Rectangle rect;  // Creating a Rectangle object on the stack
  rect.set_values (3,4);
  cout << "area: " << rect.area() << endl;
  return 0;
}
