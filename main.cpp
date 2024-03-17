#include <iostream>

#include "classes/people.h"
#include "classes/client.h"
#include "classes/employer.h"

#include "classes/bikeConfig.h"
#include "classes/mtbBike.h"
#include "classes/bmxBike.h"

#include "classes/interface.h"

void showInfoOnUI(const People &people);
void showCatalog(const BikeConfig &bike);

using namespace std;
int main()
{
    People People1("Artem", 15000, 5);
    Client Client1("Danya", 10000, 20, true);
    Employer Employer1("Koka Maksym", 20000, 10, "15.09.2013", "Ukraine");
    People* p1[50];
    p1[0] = &Employer1;
    p1[0]->show();

    BikeConfig Bike1("Bike", 0, 8000, 26, 25, "Germany");
    BmxBike BmxBike1("Bmx Bike", 2, 15, 20, "France", true, 25000);
    //MountainBike MtbBike1("Mtb Bike", 3, 895, 21, "Italy", 2, 10000);
    BikeConfig *MtbBike1 = new MountainBike("Mtb Bike", 4, 985, 21, "Italy", 2, 1500);

    showInfoOnUI(People1);
    system("pause");

    showInfoOnUI(Client1);
    system("pause");

    showInfoOnUI(Employer1);
    system("pause");


    showCatalog(Bike1);
    system("pause");

    showCatalog(BmxBike1);
    system("pause");

    showCatalog(*MtbBike1);

    Interface2 Inter2;
    Inter2.A2();


    delete MtbBike1;
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