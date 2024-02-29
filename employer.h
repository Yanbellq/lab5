#ifndef LAB3_EMPLOYER_H
#define LAB3_EMPLOYER_H
#include <iostream>
#include "people.h"
using namespace std;

class Employer : public People
{
    string dateOfBirthday, placeOfLife;
    int salary;

    static int employers;
public:
    Employer() : People(), dateOfBirthday("0.00.0000"), placeOfLife(""), salary(0) { employers++; };
    Employer(string name, int salary);
    Employer(string name, string dateOfBirthday, string placeOfLife, int salary);

//    Copy constructor♥
    Employer(const Employer& other);
    Employer(Employer& other);

//    Move constructor♥
    Employer(Employer&& other);

    string show() const;

    static int countOfEmployers() { return employers; };

    // Перевантаження дружніх операторів "<<, >>"
    friend istream &operator >> (istream &is, Employer &obj)
    {
        return is >> obj.name >> obj.dateOfBirthday >> obj.placeOfLife >> obj.salary;
    };;

    friend ostream &operator << (ostream &os, Employer &obj)
    {
        return os << obj.name << endl << obj.dateOfBirthday << endl << obj.placeOfLife << endl << obj.salary << endl << endl;
    };

    ~Employer();
};


#endif
