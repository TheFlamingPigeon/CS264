//
// Created by Stephen O Brien on 28/06/2018.
//

#include "Observer.h"
#include <iostream>


Observer::Observer() {

    temperature = 1;
}

void Observer::update(int t) {

    temperature = t;

}

int Observer::getTemperature() {
    return temperature;
}