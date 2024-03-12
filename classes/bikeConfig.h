#ifndef LAB3_BIKECONFIG_H
#define LAB3_BIKECONFIG_H
#include <iostream>
using namespace std;

class BikeConfig
{
protected:
    string name, country;
    int price, height, width;
public:
    BikeConfig();
    BikeConfig(string name, int price, int height, int width, string country);
    ~BikeConfig(){};

    BikeConfig &operator=(const BikeConfig &obj);
};






#endif
