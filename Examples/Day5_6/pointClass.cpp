#include <iostream>
#include <cmath>
using namespace std; 
 
class Point { 
	// Private Members
	int xcord;
	int ycord;
	
public: 
	// Basic Get Set Functions
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	
	// Constructor and Decon.
	Point();
	Point(int, int);
	~Point();
	
	// Working Functions
	void dispPoint();
	double centerDist();  
  
}; // End of point class
 
//// Point Class Functions
// Constructor
Point::Point(){
	xcord = 0;
	ycord = 0;
}

// Overloaded Constructor
Point::Point(int x, int y){
	xcord = x;
	ycord = y;
}

Point::~Point(){
	//cout << "Point Deleted" << endl;
}

// Distance to the center from the point
double Point::centerDist(){ 
	return sqrt((xcord*xcord) + (ycord*ycord)); 
} 

// Sets the x coord
void Point::setX(int x){
	xcord = x;
}

// Sets the y coord
void Point::setY(int y){
	ycord = y;
}

// gets x
int Point::getX(){
	return xcord;
}

// gets y
int Point::getY(){
	return ycord;
}
 
 void Point::dispPoint(){
	cout << "(" << xcord << "," << ycord << ")" << endl;
 }
 
int main() {  
	
	Point a = Point();
	Point b = Point(5,8);
	
	a.dispPoint();
	b.dispPoint();
	
  
	return 0; 
}