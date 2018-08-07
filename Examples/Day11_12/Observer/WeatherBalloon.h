//
// Created by Stephen O Brien on 28/06/2018.
//

#ifndef OBSERVEREXAMPLE_WEATHERBALLOON_H
#define OBSERVEREXAMPLE_WEATHERBALLOON_H
#include "Observer.h"
#include <vector>
using namespace std;


class WeatherBalloon {
public:

    vector<Observer*> views;


    WeatherBalloon();
    void addObserver(Observer* observer);
    void printObservers();
    void setTemperature(int);
    void updateAll(vector<Observer*> updateView);

private:

    int temperature;
};


#endif //OBSERVEREXAMPLE_WEATHERBALLOON_H
