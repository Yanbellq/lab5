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
    BikeConfig() : name(""), price(0), color(0), country(""){};

    BikeConfig(string name);
    BikeConfig(string name, int price);
    BikeConfig(string name, int price, int color);
    BikeConfig(string name, int price, int color, string country);

    string show();

    void init(string name);
    void init(string name, int price);
    void init(string name, int price, int color);
    void init(string name, int price, int color, string country);

    ~BikeConfig();
};






#endif
