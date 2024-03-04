#include "mtbBike.h"

MountainBike::MountainBike
        (string name, int price, int color, string country, int tiresDiameter, double frameThickness,
         bool haveSpeedChanger, bool haveFirstAbsorber, bool haveLastAbsorber)
{
    this->name = name;
    this->price = price;
    this->color = color;
    this->country = country;
    this->tiresDiameter = tiresDiameter;
    this->frameThickness = frameThickness;
    this->haveSpeedChanger = haveSpeedChanger;
    this->haveFirstAbsorber = haveFirstAbsorber;
    this->haveLastAbsorber = haveLastAbsorber;
};

string MountainBike::show()
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

    str = str + "Country: " + country + "\n" +
          "Tires Diameter: " + to_string(tiresDiameter) + "in.\n" +
          "Frame Thickness: " + to_string(frameThickness) + "in.\n";


    switch (haveSpeedChanger)
    {
        case 0:
            str += "Speed Changer?: No\n";
            break;
        case 1:
            str += "Speed Changer?: Yes\n";
            break;
    };
    switch (haveFirstAbsorber)
    {
        case 0:
            str += "First Absorber?: No\n";
            break;
        case 1:
            str += "First Absorber?: Yes\n";
            break;
    };
    switch (haveLastAbsorber)
    {
        case 0:
            str += "Last Absorber?: No\n";
            break;
        case 1:
            str += "Last Absorber?: Yes\n";
            break;
    };

    cout << "Constructor called\n\n";

    return str;
};