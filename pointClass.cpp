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
	
	Point a = Point();
	Point b = Point(5,4);
	
	a.dispPoint();
	b.dispPoint();
  
	return 0; 
}