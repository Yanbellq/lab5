#include "mtbBike.h"

void MountainBike::show() const
{
    BikeConfig::show();
    cout << MountainBike::tiresTypeF();
};


string MountainBike::tiresTypeF() const
{
    switch (tiresType)
    {
        case 0:
            return "Tires type: none\n";
            break;

        case 1:
            return "Tires type: Road\n";
            break;

        case 2:
            return "Tires type: Dirt\n";
            break;

        case 3:
            return "Tires type: Mountain\n";
            break;
    }
}

MountainBike::MountainBike()
    : BikeConfig(), tiresType(0) {}

MountainBike::MountainBike(std::string name, int color, int height, int width, std::string country, int tiresType, int price)
    : BikeConfig(name, color, price, height, width, country), tiresType(tiresType) {}

MountainBike &MountainBike::operator=(const MountainBike &obj)
{
    if (this != &obj)
    {
        BikeConfig::operator=(obj);
        tiresType = obj.tiresType;
    }
    return *this;
}
