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
    MountainBike(string name, int color, int height, int width, string country, int tiresType, int price);
    ~MountainBike(){};

    string tiresTypeF() const;
    void show() const;

    MountainBike &operator=(const MountainBike &obj);
};


#endif
