#ifndef LAB4_MOUNTAINBIKE_H
#define LAB4_MOUNTAINBIKE_H
#include <iostream>
#include "bikeConfig.h"
using namespace std;

class MountainBike : public BikeConfig
{
    int tiresType;
public:
    MountainBike();
    MountainBike(string name, int height, int width, string country, int tiresType, int price);
    ~MountainBike(){};

    string tiresTypeF();

    friend ostream &operator << (ostream &os, MountainBike &obj);
    MountainBike &operator=(const MountainBike &obj);
};


#endif
