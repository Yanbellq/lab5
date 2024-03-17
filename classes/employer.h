#ifndef LAB3_EMPLOYER_H
#define LAB3_EMPLOYER_H
#include <iostream>
#include "people.h"
using namespace std;

class Employer final : public People
{
    string dateOfBirthday, placeOfLife;

    static int employers;
public:
    Employer();
    Employer(string name, int money, int age, string dateOfBirthday, string placeOfLife);
    Employer(const Employer& other);
    Employer(Employer &&other);
    ~Employer(){ employers--; };

    void show() const;
    static int countOfEmployers() { return employers; };

    friend ostream &operator << (ostream &os, Employer &obj);
};


#endif
