/*
	Note: Rectangle Class UML example
	Date: 12/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

// Function Prototype


class Rectangle{
	int length;
	int width;
public:
	// Construction
	Rectangle() { length = 0; width = 0; }
	Rectangle(int l, int w) { length = l; width = w; }
	~Rectangle() {cout << "E"; }
	
	// Getters and Setters (Accessors and Mutators)
	int getLength() { return length; }
	int getWidth() { return width; }
	int getArea() { return length * width; }
	void setLength(int l) { length = l; }
	void setWidth(int w) { width = w; }
};


int main(){
	
	Rectangle rec1 = Rectangle();
	Rectangle rec2 = Rectangle(5,6);
	Rectangle rec3 = Rectangle(10,55);
	
	// Rectangle 1 Data
	cout << "Rectangle 1" << endl;
	cout << "Length: " << rec1.getLength() << endl;
	cout << "Width:  " << rec1.getWidth() << endl;
	cout << "Area:   " << rec1.getArea() << endl;
	cout << endl;
	
	// Rectangle 2 Data
	cout << "Rectangle 2" << endl;
	cout << "Length: " << rec2.getLength() << endl;
	cout << "Width:  " << rec2.getWidth() << endl;
	cout << "Area:   " << rec2.getArea() << endl;
	cout << endl;
	
	// Rectangle 3 Data
	cout << "Rectangle 3" << endl;
	cout << "Length: " << rec3.getLength() << endl;
	cout << "Width:  " << rec3.getWidth() << endl;
	cout << "Area:   " << rec3.getArea() << endl;
	cout << endl;
	
	
	system("PAUSE");
	return 0;
}