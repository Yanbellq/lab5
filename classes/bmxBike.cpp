#include "bmxBike.h"
BmxBike::BmxBike(string name, int price, int color, string country, int height, int weight, int width)
    :BikeConfig(name, price, color, country)
{
    this->name = name;
    this->price = price;
    this->color = color;
    this->country = country;
    this->height = height;
    this->weight = weight;
    this->width = width;
};

string BmxBike::show()
{
    string str;
    str =  "Name: " + name + "\n" +
           "Price: " + "$" + to_string(price) + "\n";

    switch (color)
    {
        case 0:
            str += "Color: None\n";
            break;

        case 1:
            str += "Color: White\n";
            break;

        case 2:
            str += "Color: Black\n";
            break;

        case 3:
            str += "Color: Yellow\n";
            break;

        case 4:
            str += "Color: Green\n";
            break;

        case 5:
            str += "Color: Blue\n";
            break;

        case 6:
            str += "Color: Brown\n";
            break;

        case 7:
            str += "Color: Red\n";
            break;
    };

    str = str +  "Height: " + to_string(height) + "in.\n" +
                 "Width: " + to_string(width) + "in.\n" +
                 "Weight: " + to_string(weight) + "kg.\n";

    cout << "Constructor called\n\n";

    return str;
}

BmxBike &BmxBike::operator=(const BmxBike &obj) {
    if (this != &obj) {
        BikeConfig::operator=(obj);
        height = obj.height;
        width = obj.width;
        weight = obj.weight;
    }
    return *this;
}