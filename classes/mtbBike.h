#ifndef LAB4_MOUNTAINBIKE_H
#define LAB4_MOUNTAINBIKE_H
#include <iostream>
#include "bikeConfig.h"
using namespace std;

class MountainBike final : public BikeConfig
{
    int tiresType;
public:
    MountainBike();
    MountainBike(string name, int color, int height, int width, string country, int tiresType, int price);

    ~MountainBike(){};

    string tiresTypeF() const;
    string colorF() const override;
    void show() const override;


    MountainBike &operator=(const MountainBike &obj);
};


#endif
