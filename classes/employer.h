#ifndef LAB3_EMPLOYER_H
#define LAB3_EMPLOYER_H
#include <iostream>
#include "people.h"
using namespace std;

class Employer : public People
{
    string dateOfBirthday, placeOfLife;

    static int employers;
public:
    Employer() : People(), dateOfBirthday("0.00.0000"), placeOfLife("") { employers++; };
    Employer(string name, int money);
    Employer(string name, string dateOfBirthday, string placeOfLife, int money);

//    Copy constructor♥
    Employer(const Employer& other);
    Employer(Employer& other);

//    Move constructor♥
    Employer(Employer&& other);

    string show() const;

    static int countOfEmployers() { return employers; };

    // Перевантаження дружніх операторів "<<, >>"
    friend istream &operator >> (istream &is, Employer &obj);
    friend ostream &operator << (ostream &os, Employer &obj);

    ~Employer();
};


#endif
