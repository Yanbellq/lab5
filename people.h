#ifndef LAB4_PEOPLE_H
#define LAB4_PEOPLE_H
#include <iostream>
using namespace std;

class People
{
protected:
    string name;
public:
    People() : name("") {};
    People(const People& other) : name(other.name) {};
    People(People&& other) : name(other.name) {};
};


#endif
