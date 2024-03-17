#include "bmxBike.h"

void BmxBike::show() const
{
    BikeConfig::show();
    cout << BmxBike::hasBrakesF();
};

string BmxBike::colorF() const
{
    switch (color)
    {
        case 1:
            return "Blue";
            break;

        case 2:
            return "Brown";
            break;

        case 3:
            return "Red";
            break;
    };
}

string BmxBike::hasBrakesF() const
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

BmxBike::BmxBike(std::string name, int color, int height, int width, std::string country, bool hasBrakes, int price)
    : BikeConfig(name, color, price, height, width, country), hasBrakes(hasBrakes) {}

ostream &operator << (ostream &os, BmxBike &obj)
{
    return os << "Name: " << obj.name << endl
              << obj.colorF()
              << "Height: " << obj.height << "i.n." << endl
              << "Width: " << obj.width << "i.n." << endl
              << obj.hasBrakesF()
              << "Country: " << obj.country << endl
              << "Price: $" << obj.price << endl << endl;
};

BmxBike &BmxBike::operator=(const BmxBike &obj)
{
    if (this != &obj)
    {
        BikeConfig::operator=(obj);
        hasBrakes = obj.hasBrakes;
    }
    return *this;
}