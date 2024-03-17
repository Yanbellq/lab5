#include "bikeConfig.h"

void BikeConfig::show() const
{
    cout << "Name: " << name << endl;
    cout << "Price: $" << price << endl;
    cout << "Color: " << colorF() << endl;
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
            return "None";
            break;
    };
}