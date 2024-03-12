#include "bmxBike.h"
string BmxBike::hasBrakesF()
{
    if (hasBrakes)
    {
        return "Brakes: Yes\n";
    } else
    {
        return "Brakes: No\n";
    }
}

BmxBike::BmxBike()
    : BikeConfig(), hasBrakes(false) {};

BmxBike::BmxBike(std::string name, int height, int width, std::string country, bool hasBrakes, int price)
    : BikeConfig(name, price, height, width, country), hasBrakes(hasBrakes) {}

ostream &operator << (ostream &os, BmxBike &obj)
{
    return os << "Name: " << obj.name << endl
              << "Height: " << obj.height << endl
              << "Width: " << obj.width << endl
              << obj.hasBrakesF()
              << "Country: " << obj.country << endl
              << "Price: $" << obj.price << endl << endl;
};

BmxBike &BmxBike::operator=(const BmxBike &obj) {
    if (this != &obj) {
        BikeConfig::operator=(obj);
        hasBrakes = obj.hasBrakes;
    }
    return *this;
}