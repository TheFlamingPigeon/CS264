//
// Created by Stephen O Brien on 28/06/2018.
//

#include "WeatherBalloon.h"

#include <iostream>

using namespace std;

WeatherBalloon::WeatherBalloon() {
    temperature = 1;
}
void WeatherBalloon::setTemperature(int t){         // sets temperature of the WeatherBalloon
    temperature = t;

    updateAll(views);                           // function to update all of the observers

}


void WeatherBalloon::addObserver(Observer *observer) {          // add observer
    views.push_back(observer);
}

void WeatherBalloon::printObservers(){              // print the observer temperatures

    for (int i = 0; i<views.size(); i++){
        cout<<"Observer "<<i<<" ="<<views[i]->getTemperature()<<endl;
    }
}

void WeatherBalloon::updateAll(vector<Observer*> updateView){       // updates all of the observers

    for (int i = 0; i<updateView.size(); i++){
        updateView[i]->update(temperature);
    }
}
