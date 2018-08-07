// Updated July 18th 2018
// This file is Rectangle.cpp
// It contains the class method implementations for the Rectangle class.
// The include directive below, includes the Rectangle Class definition.
#include "Rectangle.h"

// implementations of set_values and area functions

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::area() {
return width*height;
}