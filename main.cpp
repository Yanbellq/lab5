#include <iostream>

#include "classes/people.h"
#include "classes/client.h"
#include "classes/employer.h"

#include "classes/bikeConfig.h"
#include "classes/mtbBike.h"
#include "classes/bmxBike.h"

void showInfoOnUI(const People &people);
void showCatalog(const BikeConfig &bike);

using namespace std;
int main()
{
    People People1("Artem", 15000, 5);
    Client Client1("Danya", 10000, 20, true);
    Employer Employer1("Koka Maksym", 20000, 10, "15.09.2013", "Ukraine");

    BikeConfig Bike1("Bike", 1, 8000, 26, 25, "Germany");
    BmxBike BmxBike1("Bmx Bike", 5, 15, 20, "France", true, 25000);
    MountainBike MtbBike1("Mtb Bike", 3, 895, 21, "Italy", 2, 10000);

    showInfoOnUI(People1);
    showInfoOnUI(Client1);
    showInfoOnUI(Employer1);

    showCatalog(Bike1);
    showCatalog(BmxBike1);
    showCatalog(MtbBike1);


    return 0;
}

void showInfoOnUI(const People &people)
{
    cout << "--------------------------------------------\n";
    people.show();
    cout << "--------------------------------------------\n";
};

void showCatalog(const BikeConfig &bike)
{
    cout << "--------------------------------------------\n";
    bike.show();
    cout << "--------------------------------------------\n";
};