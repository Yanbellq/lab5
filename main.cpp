#include <iostream>
#include "classes/client.h"
#include "classes/employer.h"
#include "classes/mtbBike.h"
#include "classes/bmxBike.h"
using namespace std;
int main()
{

//    Bike♥
    MountainBike MtbBike1("MtbBike1", 15000, 6, "Ukraine", 29, 0.005, 1, 1, 1);
    cout << "\n\nMTB Bikes____________\n" << MtbBike1.show() << endl << endl << endl;

    BmxBike BmxBike1("BmxBike1", 10000, 1, "France", 35, 20, 5);
    cout << "\nBMX Bikes____________\n" << BmxBike1.show() << endl;

    BmxBike BmxBike2("BmxBike2", 5000, 2, "Germany", 20, 10, 20);
    cout << "\n2(before changes)____\n" << BmxBike2.show() << endl;

    BmxBike2 = BmxBike1;
    cout << "\n2(after changes)_____\n" << BmxBike2.show() << endl << endl << endl;


//    Client♥
    Client Client1("Arsen", 19, "Ukraine", 0, 0);
    Client Client2("Danya", 18, "Italy", 0, 1);
    Client Client3("Vitaliy", 21, "Germany", 0, 1);



    cout << "Clients______________\n" << Client1.show() << endl
         << "2____________________\n" << Client2.show() << endl
         << "3____________________\n" << Client3.show() << endl << "\n\n\n\n";




//    Employers♥

    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer1("Andrew", 160000, "12.02.2004", "USA");
    cout << "1____________________\n" << Employer1 << endl;
    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer2{Employer1};
    cout << "2____________________\n" << Employer2 << endl;
    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer3("Kevin", 15000, "15.22.2222", "America");
    cout << "3___Employer3(before)\n" << Employer3 << endl;
    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer4 = std::move(Employer3);
    cout << "4___________Employer4\n" << Employer4 << endl;
    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    cout << "5____Employer3(after)\n" << Employer3 << endl;
    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    return 0;
}
