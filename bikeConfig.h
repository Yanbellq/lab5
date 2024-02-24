#ifndef LAB3_BIKECONFIG_H
#define LAB3_BIKECONFIG_H
#include <iostream>
using namespace std;

class BikeConfig
{
    string name, country;
    int price, color;
public:
    BikeConfig() : name(""), price(0), color(0), country(""){};

    BikeConfig(string name);
    BikeConfig(string name, int price);
    BikeConfig(string name, int price, int color);
    BikeConfig(string name, int price, int color, string country);

    string show()
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
                str = str + "Color: Red" + "\n";
                break;
        };

        str = str + "Country: " + country + "\n\n";

        return str;
    };

    void init(string name)
    {
        this->name = name;
    };

    void init(string name, int price)
    {
        this->name = name;
        this->price = price;
    };

    void init(string name, int price, int color)
    {
        this->name = name;
        this->price = price;
        this->color = color;
    };

    void init(string name, int price, int color, string country)
    {
        this->name = name;
        this->price = price;
        this->color = color;
        this->country = country;
    };
};

#endif
