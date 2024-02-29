#ifndef LAB4_MOUNTAINBIKE_H
#define LAB4_MOUNTAINBIKE_H
#include <iostream>
#include "bikeConfig.h"
using namespace std;

class MountainBike : public BikeConfig
{


public:
    MountainBike(string name, int price);
};


#endif
