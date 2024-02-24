#include "bikeConfig.h"

bikeConfig::bikeConfig(string name)
    : price(0), color(0), country("")
{
    this->name = name;
};

bikeConfig::bikeConfig(string name, int price)
    : color(0), country("")
{
    this->name = name;
    this->price = price;
};

bikeConfig::bikeConfig(string name, int price, bool color)
    : country("")
{
    this->name = name;
    this->price = price;
    this->color = color;
};

bikeConfig::bikeConfig(string name, int price, bool color, string country)
{
    this->name = name;
    this->price = price;
    this->color = color;
    this->country = country;
};
