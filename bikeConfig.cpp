#include "bikeConfig.h"

BikeConfig::BikeConfig(string name)
    : price(0), color(0), country("")
{
    this->name = name;
};

BikeConfig::BikeConfig(string name, int price)
    : color(1), country("")
{
    this->name = name;
    this->price = price;
};

BikeConfig::BikeConfig(string name, int price, int color)
    : country("")
{
    this->name = name;
    this->price = price;
    this->color = color;
};

BikeConfig::BikeConfig(string name, int price, int color, string country)
{
    this->name = name;
    this->price = price;
    this->color = color;
    this->country = country;
};
