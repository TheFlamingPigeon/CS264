// Chapter 9 of C++ How to Program
// vehicle.cpp
#include <iostream>

using std::cout;
using std::endl;

#include "vehicle.h"

// constructor
Vehicle::Vehicle( const int doors, const int cylinders, string color, double initialFuel, const int transmission ){
	/* Write the body for Vehicle's constructor */
	numberOfDoors = doors;
    numberOfCylinders = cylinders;
    vehicleColor = color;
    fuelLevel = initialFuel;
    transmissionType = transmission;	
	
} // end class Vehicle constructor
   

// function operator<< definition
ostream &operator<<( ostream &out, const Vehicle &v )
{
   out << v.className << "\n"
	    << "\tNumber of doors: " << v.numberOfDoors
	    << "\n\tNumber of cylinders: " << v.numberOfCylinders
	    << "\n\tTransmission type: " << v.transmissionType
 	    << "\n\tColor: " << v.vehicleColor
	    << "\n\tFuel level: " << v.fuelLevel << endl;

   return out;

} // end function operator<<

/* Write definition for setColor */
void Vehicle::setColor(string c){
	vehicleColor = c;
}

void Vehicle::setFuelLevel( double amount ){ // function setFuelLevel definition
   // assume 20 gallons is full tank
   if ( amount > 0.0 && amount <= 20.0 ) 
      fuelLevel = amount;
   else
      fuelLevel = 5.0;

} // end function setFuelLevel


string Vehicle::getColor() const{ // return color
   return vehicleColor;

} // end function getColor
 

double Vehicle::getFuelLevel() const{ // return fuelLevel
   return fuelLevel;

} // end function getFuelLevel


int Vehicle::getTransmissionType() const{ // return transmissionType
   return transmissionType;

} // end function getTransmissionType
   

int Vehicle::getNumberOfDoors() const{ // return numberOfDoors
   return numberOfDoors;

} // end function getNumberOfDoors


int Vehicle::getNumberOfCylinders() const{ // return numberOfCylinders
   return numberOfCylinders;   

} // end function getNumberOfCylinders


void Vehicle::setClassName( string newName ){ // function setClassName definition
   className = newName;

} // end function setClassName


string Vehicle::getClassName() const{ // return className
   return className;

} // end function getClassName



/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

