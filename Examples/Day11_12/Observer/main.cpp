#include <iostream>
#include "WeatherBalloon.h"
#include "Observer.h"
using namespace std;

int main() {

    /*
     * Observer Pattern:
     * As we can see, A Weather Balloon collects the current temperature of Maynooth University. It has observers that
     * want to collect this information and use it. (Weather News, apple weather etc).
     * The idea is to connect the observers to the subject or observee. When the observer/subject/weather balloon
     * changes temperature, it sends an update to the observers and changes their current reading of the temperature.
     */


    WeatherBalloon* balloon = new WeatherBalloon();         // creates an observee


    Observer* obs1 = new Observer();            // two observers
    Observer* obs2 = new Observer();



    balloon->addObserver(obs1);             // adding the observers to the observee vector
    balloon->addObserver(obs2);

    balloon->setTemperature(10);      // this sets the temperature that the weatherballoon has collected and updated the
                                    // observers



    balloon->printObservers();          // this function prints the temps of the different observers

    balloon->setTemperature(37);         // resets the temperature

    balloon->printObservers();         // prints the new temperature

    cout<<obs1->getTemperature()<<endl;
    cout<<obs2->getTemperature()<<endl;

    delete obs1;
    delete obs2;



    return 0;
}