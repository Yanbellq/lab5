#ifndef LAB3_BIKECONFIG_H
#define LAB3_BIKECONFIG_H
#include <iostream>
using namespace std;

class BikeConfig
{
protected:
    string name, country;
    int price, height, width, color;
public:
    BikeConfig();
    BikeConfig(string name, int color, int price, int height, int width, string country);
    ~BikeConfig(){};

    string colorF();

    BikeConfig &operator=(const BikeConfig &obj);
};






#endif
