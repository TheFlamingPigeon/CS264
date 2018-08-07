#include<iostream>
#include<string>
#pragma once 
// Find out and write in your blue book why "#pragma once" is used 
// above here in this file and why #ifndef TRUCK_H is used in the Truck.h file.

using namespace std;

class Vehicle{

 private:

	int wheels;
	string colour;
	int maxSpeed;
	string className;

 public: 
        Vehicle(int wheels,string colour, int maxSpeed);
        void setWheels(int wheels);
        int getWheels();
        void setColour(string colour);
        string getColour();
        void setMaxSpeed(int maxSpeed);
        int getMaxSpeed();
        void setClassName(string className);
        string getClassName();

};// make sure to add the semicolon at the end.
