/* Joe Duffin 26th July 2015
Truck Class methods implementation
Notice: that the Truck constructor uses the Vehicle parent constructor
*/

#include <iostream>
#include <string>

using namespace std;

#include "Truck.h"

Truck::Truck(int speed): Vehicle(4,"Black", speed)
{
   smallRoads= false; // trucks can not use small roads
   setClassName("Truck");  

}

void Truck::setSmallRoads(bool smallRoads){ this->smallRoads= smallRoads;}
bool Truck::getSmallRoads(){ return this->smallRoads;}
