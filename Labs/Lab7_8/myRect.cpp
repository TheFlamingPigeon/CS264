/*
	Note: Lab 7&8 - Part B - Question 3&4 - Rectangle Class 
	Date: 17/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;


class Rect{ // Rectangle Class := shortened to Rect for typing sake
	string color;
	double length, width;
public:
	// Constructors & Destructor
	Rect() { color = "Gray"; length = 1.0; width = 1.0; }
	Rect(double l, double w) { color = "Gray"; length = l; width = w; }
	Rect(double l, double w, string c) { color = c; length = l; width = w; }
	//~Rect();
	
	// Getters and Setters
	string getColor() { return color; }
	double getLength() { return length; }
	double getWidth() { return width; }
	void setColor(string c) { color = c; }
	void setLength(double l) { length = l; }
	void setWidth(double w) { width = w; }
	
	// Rectangle Functions
	double calcArea();
	double calcPerimeter();
	void dispRect();

};

// Rect Functions
double Rect::calcArea(){
	return length * width;
}

double Rect::calcPerimeter(){
	return ( (2*length) + (2*width) );
}

void Rect::dispRect() {
	cout << "Length: " << getLength() << endl;
	cout << "Width: " << getWidth() << endl;
	cout << "Color: " << getColor() << endl;
	cout << endl;
}


/// ########## Main ########## \\\

int main(){
	
	// Object Creation
	Rect r1 = Rect();
	Rect r2 = Rect(5,2);
	Rect r3 = Rect(7.0,7.25,"Blue");
	
	r1.dispRect();
	r2.dispRect();
	r3.dispRect();
	system("PAUSE");
	
	// Changing the values of r1
	r1.setLength(12.34);
	r1.setWidth(3.14);
	r1.setColor("Red 204");

	// Variable allocation for area and perimeter
	double area1, area2, area3;
	double per1, per2, per3;
	
	area1 = r1.calcArea();
	area2 = r2.calcArea();
	area3 = r3.calcArea();
	
	per1 = r1.calcPerimeter();
	per2 = r2.calcPerimeter();
	per3 = r3.calcPerimeter();
	
	cout <<   "Rectangle 1" << endl << "Area: " << area1 << "\nPerimeter: " << per1 << endl;
	cout << "\nRectangle 2" << endl << "Area: " << area2 << "\nPerimeter: " << per2 << endl;
	cout << "\nRectangle 3" << endl << "Area: " << area3 << "\nPerimeter: " << per3 << endl;
	cout << endl;
	system("PAUSE");
	
	// Final Display of all rectangles
	r1.dispRect();
	r2.dispRect();
	r3.dispRect();
	
	// Creating an array of Rectangles
	system("PAUSE");
	Rect *rectArr = new Rect[4];
	
	rectArr[0] = Rect(1.25,1.55);
	rectArr[1] = Rect(10,10);
	rectArr[2] = Rect(14.223,1);
	rectArr[3] = Rect(5,5.315,"Blue");
	
	rectArr[0].dispRect();
	rectArr[1].dispRect();
	rectArr[2].dispRect();
	rectArr[3].dispRect();
	
	system("PAUSE");
	return 0;
}