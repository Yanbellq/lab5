#include <iostream>
#include "client.h"
#include "employer.h"
#include "bikeConfig.h"
#include "operator.h"

using namespace std;

int main()
{

//    Bike♥
    BikeConfig Bike;

    BikeConfig Bike1("Bike1");
    BikeConfig Bike2("Bike2", 15000);
    BikeConfig Bike3("Bike3", 15000, 2);
    BikeConfig Bike4("Bike4", 15000, 3, "Ukraine");

    BikeConfig Bikes[3];
    Bikes[0].init("Bike[0]", 12000, 1, "Italy");
    Bikes[1].init("Bike[1]", 10000, 3, "France");
    Bikes[2].init("Bike[2]", 20000, 2, "Chilie");


//    Client♥
    Client Client1("Arsen", 19, "Ukraine", 1, 0);
    Client Client2("Danya", 18, "Italy", 0, 1);
    Client Client3("Vitaliy", 21, "Germany", 1, 1);



    cout << "Bikes________________\n" << Bike.show() << endl
         << "1____________________\n" << Bike1.show() << endl
         << "2____________________\n" << Bike2.show() << endl
         << "3____________________\n" << Bike3.show() << endl
         << "3____________________\n" << Bike4.show() << endl
         << "4____________________\n" << Bikes[0].show() << endl
         << "5____________________\n" << Bikes[1].show() << endl
         << "6____________________\n" << Bikes[2].show() << endl << "\n"
         << "Clients______________\n" << Client1.show() << endl
         << "2____________________\n" << Client2.show() << endl
         << "3____________________\n" << Client3.show() << endl << "\n\n\n\n";




//    Employers♥

    cout << "Count of Employers: " << Employer::countOfEmployers() << endl << endl;

    const Employer Employer1("Andrew", "12.02.2004", "USA", 160000);
    cout << "1____________________\n" << Employer1.show() << endl;


    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    // Copy Employer1 to Employer2
    const Employer Employer2{Employer1};
    cout << "2____________________\n" << Employer2.show() << endl;


    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    Employer Employer3("Kevin", "15.22.2222", "America", 15000);
    cout << "3____________________\n" << Employer3.show() << endl;


    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;

    // Move Employer3 to Employer4, and clear Employer3
    Employer Employer4 = move(Employer3);
    cout << "4____________________\n" << Employer4.show() << endl;

    cout << "\nCount of Employers: " << Employer::countOfEmployers() << endl << endl;



    Employer Employer5;
    cin >> Employer5;
    cout << Employer5;

    Employer Employer6("Masha", "01.01.2001", "China", 16000);
    cout << Employer6;


    Operator p1{1, 2};
    Operator p2 = +p1; // Виклик перевантаженого оператора `+`

    std::cout << p2.show() << endl;

    return 0;
}
