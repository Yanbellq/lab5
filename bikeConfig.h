#ifndef LAB3_BIKECONFIG_H
#define LAB3_BIKECONFIG_H
#include <iostream>
using namespace std;

class bikeConfig
{
    string name, country;
    bool color;
    int price;
public:
    bikeConfig() : name(""), price(0), color(0), country(""){};

    bikeConfig(string name);
    bikeConfig(string name, int price);
    bikeConfig(string name, int price, bool color);
    bikeConfig(string name, int price, bool color, string country);

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
};


#endif
