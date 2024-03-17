#include "client.h"
Client::Client()
    : People(), buyBike(false) {}

Client::Client(string name, int age, int money, bool buyBike)
    : People(name, money, age), buyBike(buyBike) {}

string Client::buyBikeF()
{
    if (buyBike)
    {
        cout << "Enter bike:";
        getline(cin, bikeMake);

        return "Buy bike: " + bikeMake + "\n";
    } else
    {
        return "Buy bike: No bike purchased\n";
    }
};

ostream &operator << (ostream &os, Client &obj)
{
    return os << "Name: " << obj.name << endl
              << "Age: " << obj.age << "y.o." << endl
              << "Credit: $" << obj.money << endl
              << obj.buyBikeF() << endl << endl;
};