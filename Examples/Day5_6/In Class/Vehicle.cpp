// listing 4
// A program that uses the Vehicle class.   
 
#include <iostream> 
using namespace std; 
 
// Declare the Vehicle class. 
class Vehicle {
	int value;  // Adding an extra value
	int passengers; 	// number of passengers  
public: 
	
	int fuelcap;    	// fuel capacity in gallons 
	int mpg;        	// fuel consumption in miles per gallon 
	string type;		// type of vehicle
	
	Vehicle();			// Constructor
	int range();   		// compute and return the range
	void printRange(); 	// Prints the range
	int getValue(); 	// Returns value
	void setValue(int);	// Sets the value of value
	int getPassengers();
	void setPassengers(int);
}; 
 
 Vehicle::Vehicle(){
	 value = -1;
	 passengers = -1;
	 fulecap = -1;
	 mpg = -1;
	 type = "NULL";
 }
 
// Implement the range member function.  
int Vehicle::range() { 
  return mpg * fuelcap; 
}

void Vehicle::printRange(){
	cout << "Your " << type << " can carry " << passengers << " with a range of " << range() << endl;
}

// This function allows me to access the private value
int Vehicle::getValue(){
	return value;
}

void Vehicle::setValue(int x){
	value = x;
}

int Vehicle::getPassengers(){
	return passengers;
}

void Vehicle::setPassengers(int q){
	passengers = q;
}

// Main method Function Prototypes
void changeToMotorcycle(Vehicle&);
 
int main() {
	
	Vehicle minivan; // create a Vehicle object 
	Vehicle sportscar; // create another object  
	 
	int range1, range2;  
	 
	// Assign values to fields in minivan. 
	minivan.passengers = 7; 
	minivan.fuelcap = 16; 
	minivan.mpg = 21;
	minivan.type = "Minivan";
	
	  
	// Assign values to fields in sportscar. 
	sportscar.passengers = 2; 
	sportscar.fuelcap = 14; 
	sportscar.mpg = 12;
	sportscar.type = "Sportscar";
	 
	// Compute the ranges assuming a full tank of gas.  
  
	minivan.printRange();
	sportscar.printRange();

	changeToMotorcycle(minivan);
	
	minivan.printRange();
	cout << endl;
	
	cout << minivan.getValue() << endl;
	minivan.setValue(7850);
	cout << minivan.getValue() << endl;
	
	return 0; 
}


void changeToMotorcycle(Vehicle& v){
	v.passengers = 1;
	v.fuelcap = 12;
	v.mpg = 48;
	v.type = "Motorcycle";
}