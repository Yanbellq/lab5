#include "client.h"

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