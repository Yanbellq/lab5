#include "bikeConfig.h"

BikeConfig::BikeConfig(string name)
{
    this->name = name;
};

BikeConfig::BikeConfig(string name, int price)
    : BikeConfig(name)
{
    this->price = price;
};

BikeConfig::BikeConfig(string name, int price, int color)
    : BikeConfig(name, price)
{
    this->color = color;
};

BikeConfig::BikeConfig(string name, int price, int color, string country)
    : BikeConfig(name, price, color)
{
    this->country = country;
};

BikeConfig::~BikeConfig()
{
    cout << "Destructor called\n";
};

BikeConfig &BikeConfig::operator=(const BikeConfig &obj){
    if (this != &obj) {
        name = obj.name;
        price = obj.price;
        color = obj.color;
        country = obj.country;
    }
    return *this;
}
