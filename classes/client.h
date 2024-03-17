#ifndef LAB3_CLIENT_H
#define LAB3_CLIENT_H
#include <iostream>
#include "people.h"
using namespace std;

class Client : public People
{
    bool buyBike;
public:
    Client();
    Client(string name, int money, int age, bool buyBike);
    ~Client(){};

    string buyBikeF() const;
    void show() const;
};

#endif
