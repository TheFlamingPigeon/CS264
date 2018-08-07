#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include <iostream>

#include "Vehicle.h"  // you need to include this because Truck extends Vehicle

using namespace std;

class Truck: public Vehicle{

private: 

 	bool smallRoads;

public:
	Truck(int speed);
        void setSmallRoads(bool smallRoads);
        bool getSmallRoads();

};
#endif // TRUCK_H

