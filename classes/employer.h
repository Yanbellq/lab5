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
    Employer();
    Employer(string name, int money, string dateOfBirthday, string placeOfLife);
    Employer(const Employer& other);
    Employer(Employer &&other);
    ~Employer(){ employers--; };


    static int countOfEmployers() { return employers; };

    friend istream &operator >> (istream &is, Employer &obj);
    friend ostream &operator << (ostream &os, Employer &obj);


};


#endif
