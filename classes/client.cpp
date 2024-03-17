#include "client.h"

void Client::show() const
{
    People::show();
    cout << Client::buyBikeF();
}

Client::Client()
    : People(), buyBike(false) {}

Client::Client(string name, int age, int money, bool buyBike)
    : People(name, money, age), buyBike(buyBike) {}

string Client::buyBikeF() const
{
    if (buyBike)
    {
        return "Buy bike: Yes\n";
    } else
    {
        return "Buy bike: No bike purchased\n";
    }
};
