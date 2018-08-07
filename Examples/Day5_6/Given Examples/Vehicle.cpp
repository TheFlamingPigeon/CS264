/* Joe Duffin 26th July 2015
Vehicle Class method and constructor implementations
*/
#include<iostream>
#include<string>

#include "Vehicle.h"  
// Vehicle.h contains the Vehicle class definition comprising 
// the Vehicle class attributes as wells as the method and constructor signatures.

using namespace std;

Vehicle::Vehicle (int wheels, string colour, int maxSpeed){

  this->wheels = wheels;
  this->colour = colour;
  this->maxSpeed = maxSpeed;
  this->className= "Vehicle";

};

void Vehicle::setWheels(int wheels){ this->wheels = wheels;}
int Vehicle::getWheels(){ return this->wheels;}

void Vehicle::setColour(string colour){ this->colour = colour;}
string Vehicle::getColour(){ return this->colour;}

void Vehicle::setMaxSpeed(int maxSpeed){ this->maxSpeed = maxSpeed;}
int Vehicle::getMaxSpeed(){ return this->maxSpeed;}

void Vehicle::setClassName(string className){ this->className = className;}
string Vehicle::getClassName(){ return this->className;}


