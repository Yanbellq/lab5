#include "bikeConfig.h"
BikeConfig::BikeConfig()
    : BikeConfig("", 0, 0, 0, 0, "") {}

BikeConfig::BikeConfig(string name, int color, int price, int height, int width, string country)
    : name(name), color(color), price(price), height(height), width(width), country(country){};

BikeConfig &BikeConfig::operator=(const BikeConfig &obj)
{
    if (this != &obj)
    {
        name = obj.name;
        color = obj.color;
        price = obj.price;
        height = obj.height;
        width = obj.width;
        country = obj.country;
    }
    return *this;
}

string BikeConfig::colorF()
{
    switch (color)
    {
        case 0:
            return "Color: None\n";
            break;

        case 1:
            return "Color: White\n";
            break;

        case 2:
            return "Color: Black\n";
            break;

        case 3:
            return "Color: Yellow\n";
            break;
        case 4:
            return "Color: Green\n";
            break;

        case 5:
            return "Color: Blue\n";
            break;

        case 6:
            return "Color: Brown\n";
            break;

        case 7:
            return "Color: Red\n";
            break;
    };
}