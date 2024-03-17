#ifndef LAB4_BMXBIKE_H
#define LAB4_BMXBIKE_H
#include <iostream>
#include "bikeConfig.h"
using namespace std;

class BmxBike final : public BikeConfig
{
    bool hasBrakes;
public:
    BmxBike();
    BmxBike(string name, int color, int height, int width, string country, bool hasBrakes, int price);
    ~BmxBike(){};

    string hasBrakesF() const;
    string colorF() const override;
    void show() const;

    friend ostream &operator << (ostream &os, BmxBike &obj);
    BmxBike &operator=(const BmxBike &obj);
};
#endif
