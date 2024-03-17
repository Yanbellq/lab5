#ifndef LAB5_INTERFACE_H
#define LAB5_INTERFACE_H
#include <iostream>
using namespace std;

class Interface
{
public:
    virtual void A1() = 0;
    virtual void A2() = 0;
    virtual void A3() = 0;
    virtual void A4() = 0;
};

class Interface1 : public Interface
{
public:

    void A1() override
    {
        cout << "A1" << endl;
    }
};

class Interface2 : public Interface1
{
public:
    void A2() override
    {
        cout << "A2" << endl;
    }
    void A3() override
    {
        cout << "A3" << endl;
    }
    void A4() override
    {
        cout << "A4" << endl;
    }
};

#endif