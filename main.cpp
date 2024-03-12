#include <iostream>
#include "classes/client.h"
#include "classes/employer.h"
#include "classes/mtbBike.h"
#include "classes/bmxBike.h"
using namespace std;
int main()
{


//    Client♥
    cout << "Clients______________" << endl;
    Client Client1("Andrei", 15, 15000, false);
    cout << Client1;

//    Bike♥
    cout << "MTB-Bike_____________" << endl;
    MountainBike MtbBike1("F-la Dragonfly", 15, 15, "GB", 2, 15000);
    MountainBike MtbBike2 = MtbBike1;
    cout << MtbBike1 << MtbBike2;

    cout << "BMX-Bike_____________" << endl;
    BmxBike BmxBike1("erv", 2, 2, "USSR", false, 15000);
    BmxBike BmxBike2 = BmxBike1;
    cout << BmxBike1 << BmxBike2;


//    Employers♥
    cout << "\n\nEmployers_____________" << endl;

    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer1("Andrew", 15, 160000, "12.02.2004", "USA");
    cout << "1____________________\n" << Employer1 << endl;
    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer2{Employer1};
    cout << "2____________________\n" << Employer2 << endl;
    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer3("Kevin", 15, 15000, "15.22.2222", "America");
    cout << "3___Employer3(before)\n" << Employer3 << endl;
    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer4 = std::move(Employer3);
    cout << "4___________Employer4\n" << Employer4 << endl;
    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    cout << "5____Employer3(after)\n" << Employer3 << endl;
    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    return 0;
}
