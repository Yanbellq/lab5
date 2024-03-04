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

BikeConfig::~BikeConfig()
{
    cout << "Destructor called\n";
};

string BikeConfig::show()
{
    string str;
    str =  "Name: " + name + "\n" +
           "Price: " + "$" + to_string(price) + "\n";

    switch (color)
    {
        case 0:
            str = str + "Color: None" + "\n";
            break;

        case 1:
            str = str + "Color: White" + "\n";
            break;

        case 2:
            str = str + "Color: Black" + "\n";
            break;

        case 3:
            str = str + "Color: Yellow" + "\n";
            break;
        case 4:
            str = str + "Color: Green" + "\n";
            break;

        case 5:
            str = str + "Color: Blue" + "\n";
            break;

        case 6:
            str = str + "Color: Brown" + "\n";
            break;

        case 7:
            str = str + "Color: Red" + "\n";
            break;
    };

    str = str + "Country: " + country + "\n\n";

    cout << "Constructor called\n\n";

    return str;
};

void BikeConfig::init(string name)
{
    this->name = name;
};
void BikeConfig::init(string name, int price)
{
    this->name = name;
    this->price = price;
};
void BikeConfig::init(string name, int price, int color)
{
    this->name = name;
    this->price = price;
    this->color = color;
};
void BikeConfig::init(string name, int price, int color, string country)
{
    this->name = name;
    this->price = price;
    this->color = color;
    this->country = country;
};
