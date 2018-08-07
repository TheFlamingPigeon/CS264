//listing 20
// Adjusted to remove names and types of shapes and annotated by Joe Duffin 23rd July 2018
// Creating and abstract class by using a pure virtual function. 
// An abstract class can not be itself instantiated, and any derived class must define the 
// pure virtual function defined in this base class.

// Use virtual functions and polymorphism 
 
 
#include <iostream> 
#include <cstring> 
using namespace std; 
 
// A class for two-dimensional objects. 
class TwoDShape { 
  // these are private 
  double width; 
  double height; 

public: 
 
  // Default constructor. 
  TwoDShape() { 
    width = height = 0.0; 

  } 
 
  // Constructor for TwoDShape. 
  TwoDShape(double w, double h) { 
    width = w; 
    height = h; 

  } 
 
  // Construct object with equal width and height. 
  TwoDShape(double x) { 
    width = height = x; 

  } 
 
  void showDim() { 
    cout << "Width and height are " << 
             width << " and " << height << "\n"; 
  } 
 
  // accessor functions 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 

 
  /********** PURE VIRTUAL FUNCTION DEFINED IN THE BASE CLASS TwoDShape ********/
  // Add area() to TwoDShape and make it pure virtual. 
  /*** This will cause the TwoDShape to become an abstract class which can not be instantiated ****/
  // It also forces any derived classes to define this function 
  virtual double area() = 0;
 
}; 
 
// Triangle is derived from TwoDShape. 
class Triangle : public TwoDShape { 

public: 
 
  /* A default constructor. This automatically invokes 
     the default constructor of TwoDShape. */ 
  Triangle() { 
    
  } 
 
  // Constructor with three parameters. 
  Triangle(double w, 
           double h) : TwoDShape(w, h) { 
           
  } 
   
  // Construct an isosceles triangle. 
  Triangle(double x) : TwoDShape(x) { 
     
  } 
  
  /**** VIRTUAL FUNCTION OVERRIDE **********************/
  // This now overrides area() declared in TwoDShape. 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 

}; 
 
// A derived class of TwoDShape for rectangles. 
class Rectangle : public TwoDShape { 
public: 
 
  // Construct a rectangle.  
  Rectangle(double w, double h) :  
    TwoDShape(w, h) { }  
  
  // Construct a square.  
  Rectangle(double x) :  
    TwoDShape(x) { }  
 
  bool isSquare() { 
    if(getWidth() == getHeight()) return true; 
    return false; 
  } 
 /**** VIRTUAL FUNCTION OVERRIDE **********************/
  // This is another override of of the virtual function area().   
  /**** See what happens if you remove this definition of area from this Rectangle class and compile the code */
  double area() {  
    return getWidth() * getHeight(); 
  } 
}; 
 
int main() { 

 // declaring a single TwoDShape object, pointed to by pointer p.
 TwoDShape * p = new Triangle(10.0);
 cout << " The are of the Triangle is " << p->area() << "  " << endl;


  // declare an array of pointers to TwoDShape objects. 
  TwoDShape *shapes[5]; 
  
  shapes[0] = new Triangle( 8.0, 12.0);  
  shapes[1] = new Rectangle(10);  
  shapes[2] = new Rectangle(10, 4);  
  shapes[3] = new Triangle(7.0);  
  //shapes[4] = new TwoDShape(10, 20); // because TwoDShape is now an abstract class, you can no longer create an instance of it 
  
  for(int i=0; i < 4; i++) {  
 
    cout << "Area is " << 
            shapes[i]->area() << "\n";  
  
    cout << "\n";    
  }  
 
  return 0; 
}