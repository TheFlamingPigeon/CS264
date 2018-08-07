// This file is ARectangle.cpp
#include<iostream>
using namespace std;

/* To compile and run this program do the following:
 
 1) g++ -o Rect2 ARectangle.cpp
 2) ./Rect2

*/
class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}


int main () {
  Rectangle rect;  // Creating a Rectangle object on the stack
  rect.set_values (3,4);
  cout << "area: " << rect.area() << endl;
  return 0;
}