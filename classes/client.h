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
    Client();
    Client(string name, int age, string location, bool buyBike, bool credit);

    string show();

    ~Client();
};

#endif
