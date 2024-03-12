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
    People();
    People(string name, int money);

    People(const People& other);
    People(People&& other) noexcept;

    ~People(){};

    friend ostream &operator <<(ostream &os,const People &obj);
};


#endif
