#include "client.h"

string Client::show()
{
    string str;

    str = "Name: " + name + "\n" +
          "Age: " + to_string(age) + "\n" +
          "Location: " + location + "\n";


    switch (buyBike)
    {
        case 0:
            str = str + "Buy bike: No bike purchased" + "\n";
            break;

        case 1:
            cout << "Enter bike:";
            getline(cin, bikeMake);

            str = str + "Buy bike: " + bikeMake + "\n";
            break;
    };

    switch (credit)
    {
        case 0:
            str = str + "Credit: No" + "\n";
            break;

        case 1:
            str = str + "Credit: Yes" + "\n";
            break;
    }


    return str;
};

Client::Client(string name)
    : age(0), location(""), buyBike(0)
{
    this->name = name;
};

Client::Client(string name, int age) : Client(name)
{
    this->age = age;
};

Client::Client(string name, int age, string location) : Client(name, age)
{
    this->location = location;
};

Client::Client(string name, int age, string location, bool buyBike) : Client(name, age, location)
{
    this->buyBike = buyBike;
};

Client::Client(string name, int age, string location, bool buyBike, bool credit) : Client(name, age, location, buyBike)
{
    this->credit = credit;
};

Client::~Client()
{
    cout << "Destructor called\n";
};