#ifndef LAB3_CLIENT_H
#define LAB3_CLIENT_H
#include <iostream>
#include "people.h"
using namespace std;

class Client : public People
{
    string bikeMake;
    bool buyBike;
public:
    Client();
    Client(string name, int age, int money, bool buyBike);
    ~Client(){};

    string buyBikeF();

    friend ostream &operator << (ostream &os, Client &obj);
};

#endif
