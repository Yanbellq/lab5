#ifndef LAB4_MOUNTAINBIKE_H
#define LAB4_MOUNTAINBIKE_H
#include <iostream>
#include "bikeConfig.h"
using namespace std;

class MountainBike : public BikeConfig
{
private:
    int tiresDiameter;
    double frameThickness;
    bool haveSpeedChanger, haveFirstAbsorber, haveLastAbsorber;

public:
    MountainBike(string name, int price, int color, string country, int tiresDiameter, double frameThickness,
                 bool haveSpeedChanger, bool haveFirstAbsorber, bool haveLastAbsorber);

    string show();
};


#endif
