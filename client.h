#ifndef LAB3_CLIENT_H
#define LAB3_CLIENT_H
#include <iostream>
#include "people.h"
using namespace std;

class Client : public People
{
    string location, bikeMake;
    bool buyBike, credit;
    int age;
public:
    Client() : People(), age(0), location(""), buyBike(0){};

    Client(string name);
    Client(string name, int age);
    Client(string name, int age, string location);
    Client(string name, int age, string location, bool buyBike);
    Client(string name, int age, string location, bool buyBike, bool credit);

    string show();

    ~Client();
};

#endif
