#ifndef LAB3_BIKECONFIG_H
#define LAB3_BIKECONFIG_H
#include <iostream>
using namespace std;

class BikeConfig
{
protected:
    string name, country;
    int price, color;
public:
    BikeConfig() : name(""), price(0), color(0), country("") {};

    BikeConfig(string name);
    BikeConfig(string name, int price);
    BikeConfig(string name, int price, int color);
    BikeConfig(string name, int price, int color, string country);

    ~BikeConfig();

    BikeConfig &operator=(const BikeConfig &obj);
};






#endif
