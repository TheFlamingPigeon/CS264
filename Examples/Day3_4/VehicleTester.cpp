/* Joe Duffin 26th July 2015
VehicleTester program which creates both Vehicle and Truck objects.
Compilation (building and linking) instructions:

Note: Both the Truck.h and Vehicle.h header files are "consumed" in this process
but they are not mentioned explicitly in the command line compilation instructions.

1) g++ -c Vehicle.cpp (builds --- > Vehicle.o) 
2) g++ -c Truck.cpp   (builds ---> Truck.o)
3) g++ -o VehicleTester VehicleTester.cpp Vehicle.o Truck.o  (builds ---> VehicleTester)

4) ./VehicleTester   (runs the VehicleTester program)

*/

#include<iostream>
#include<string>

#include "Truck.h"

using namespace std;

int main(){

 cout << "This program creates Vehicle and Truck objects" << endl;

 Vehicle * myBanger = new Vehicle(4, "blue", 250); // creating a Vehicle object on the heap

 string c1 = myBanger->getColour();
 int w1 = myBanger->getWheels();
 int s1 = myBanger->getMaxSpeed();

 Vehicle yourBanger(4,"red", 100); // creating a Vehicle object on the stack
  
 string c2 = yourBanger.getColour();
 int w2 = yourBanger.getWheels();
 int s2 = yourBanger.getMaxSpeed();


 Truck * myTruck = new Truck(56); // creating a Truck object on the heap

 string id3 = myTruck->getClassName();
 string c3 = myTruck->getColour();
 int s3 = myTruck->getMaxSpeed();
 int w3 = myTruck->getWheels(); 

 cout <<" My car is the colour (" << c1 <<") and has " << w1<< " wheels with a max speed of " << s1 << "mph" << endl;
 cout <<" Your car is the colour ( " << c2 <<") and has " << w2 << " wheels with a max speed of " << s2 << "mph"<< endl;
 cout << "I am a : " << id3 << " , and i have " << w3 << " wheels, my max speed is " << s3 << endl;

 delete myBanger; // Deleting the heap created objects.
 delete myTruck;

}
