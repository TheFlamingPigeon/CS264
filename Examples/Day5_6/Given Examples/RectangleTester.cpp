//This file is: RectangleTester.cpp
#include<iostream>
#include "Rectangle.h"

/*
 The order of compiling and running the assoiated files.
 1) g++ -c Rectangle.cpp
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
