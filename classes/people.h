#ifndef LAB4_PEOPLE_H
#define LAB4_PEOPLE_H
#include <iostream>
using namespace std;

class People
{
protected:
    string name;
    int money, age;

public:
    People();
    People(string name, int money, int age);

    People(const People& other);
    People(People&& other);

    ~People(){};

    friend ostream &operator <<(ostream &os,const People &obj);
};


#endif
