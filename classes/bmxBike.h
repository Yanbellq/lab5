#ifndef LAB4_BMXBIKE_H
#define LAB4_BMXBIKE_H
#include <iostream>
#include "bikeConfig.h"
using namespace std;

class BmxBike : public BikeConfig
{
    int height, weight, width;

public:
    BmxBike();
    BmxBike(string name, int price, int color, string country, int height, int weight, int width);

    string show();
    BmxBike &operator=(const BmxBike &obj);
};


#endif
