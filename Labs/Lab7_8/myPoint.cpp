/*
	Note: Lab 7&8 - Part B - Question 1 - Point Class 
	Date: 17/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
#include <cmath>
using namespace std; 
 
class Point { 
	// Private Members
	int xcord;
	int ycord;
	
public: 
	// Basic Get Set Functions
	void setX(int x) { xcord = x; }
	void setY(int y) { ycord = y; }
	void setPoint(int x, int y) { xcord = x; ycord = y; }
	int getX() { return xcord; }
	int getY() { return ycord; }
	
	// Constructor and Decon.
	Point() { xcord = 0; ycord = 0; }
	Point(int x, int y) { xcord = x; ycord = y; }
	~Point();
	
	// Working Functions
	void dispPoint();
	double centerDist();  
  
}; // End of point class
 
/// Point Class Functions

Point::~Point(){
	cout << "Point " << "(" << xcord << "," << ycord << ")" << " Deleted" << endl;
}

// Distance to the center from the point
double Point::centerDist(){ 
	return sqrt((xcord*xcord) + (ycord*ycord)); 
} 

// Display of points coord's
 void Point::dispPoint(){
	cout << "(" << xcord << "," << ycord << ")" << endl;
 }
 
 
int main() {  
	
	/// Part A 
	Point a = Point();
	Point b = Point(5,4);
		
	a.dispPoint();
	b.dispPoint();
  
	/// Part B
	Point *arr = new Point[5]; // New array of points
	
	// Setting values as specified
	arr[0].setPoint(11,22);
	arr[4].setPoint(9,22);
	
	// Displaying values as specified
	arr[0].dispPoint();
	arr[4].dispPoint();
	
	// Memory management
	delete arr;
	
	return 0; 
}






