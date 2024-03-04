#ifndef LAB4_PEOPLE_H
#define LAB4_PEOPLE_H
#include <iostream>
using namespace std;

class People
{
protected:
    string name;
    int money;

public:
    People() : name(""), money(0) { cout << "Parent defaul constructor called" << endl; };
    People(const People& other) : name(other.name), money(other.money + 1) { cout << "Parent copy constructor called" << endl; };
    People(People&& other) : name(other.name), money(other.money) { cout << "Parent move constructor called" << endl; };
};


#endif
