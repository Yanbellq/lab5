#ifndef LAB4_PEOPLE_H
#define LAB4_PEOPLE_H
#include <iostream>
using namespace std;

class People
{
protected:
    string name;
public:
    People() : name("") { cout << "Parent defaul constructor called" << endl; };
    People(const People& other) : name(other.name) { cout << "Parent copy constructor called" << endl; };
    People(People&& other) : name(other.name) { cout << "Parent move constructor called" << endl; };
};


#endif
