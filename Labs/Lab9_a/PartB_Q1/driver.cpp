// Chapter 9 of C++ How to Program
// driver for inheritance hierarchy
#include <iostream>

using std::cout;
using std::endl;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
    Vehicle car( 2, 6, "blue", 14.6, 3 );
    Taxi cab( 3.3 );
    Truck mack( 7.54 );


    /* Write code to indicate that mack is carrying cargo */
	cout << mack.hasCargo() << endl;
	
    /* Write code to print all objects in the Vehicle
      hierarchy */
	
	// CMD Text Output
	cout << endl;
	cout << "Car" << endl;
	cout << "Number of Doors: " << 		car.getNumberOfDoors() << endl;
	cout << "Number of Cylinders: " << 	car.getNumberOfCylinders() << endl;
	cout << "Transmition Type: " << 	car.getTransmissionType() << endl;
	cout << "Color: " << 				car.getColor() << endl;
	cout << "Fuel Level: " << 			car.getFuelLevel() << endl;
	cout << endl;
	
	cout << "Taxi" << endl;
	cout << "Number of Doors: " << 		cab.getNumberOfDoors() << endl;
	cout << "Number of Cylinders: " << 	cab.getNumberOfCylinders() << endl;
	cout << "Transmition Type: " << 	cab.getTransmissionType() << endl;
	cout << "Color: " << 				cab.getColor() << endl;
	cout << "Fuel Level: " << 			cab.getFuelLevel() << endl;
	cout << "(Bool) Does the Taxi Have Customers: " << cab.hasCustomers() << endl;
	cout << endl;
	
	cout << "Mack Truck" << endl;
	cout << "Number of Doors: " << 		mack.getNumberOfDoors() << endl;
	cout << "Number of Cylinders: " << 	mack.getNumberOfCylinders() << endl;
	cout << "Transmition Type: " << 	mack.getTransmissionType() << endl;
	cout << "Color: " << 				mack.getColor() << endl;
	cout << "Fuel Level: " << 			mack.getFuelLevel() << endl;
	cout << "(Bool) Truck Cargo: " <<	mack.hasCargo() << endl;
	
   return 0;

} // end main

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

