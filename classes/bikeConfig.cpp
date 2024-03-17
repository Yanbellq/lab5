#include "bikeConfig.h"

void BikeConfig::show() const
{
    cout << "Name: " << name << endl;
    cout << "Price: $" << price << endl;
    cout << "Color: " << colorF();
    cout << "Country: " << country << endl;
    cout << "Height: " << height << "in." << endl;
    cout << "Width: " << width << "in." << endl;
};

BikeConfig::BikeConfig()
    : BikeConfig("", 0, 0, 0, 0, "")
    { }

BikeConfig::BikeConfig(string name, int color, int price, int height, int width, string country)
    : name(name), color(color), price(price), height(height), width(width), country(country)
    { };

BikeConfig::BikeConfig(const BikeConfig &other)
    : name(other.name), color(other.color), price(other.price), height(other.height), width(other.width), country(other.country)
    { }


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

string BikeConfig::colorF() const
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