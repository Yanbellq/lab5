#ifndef LAB3_EMPLOYER_H
#define LAB3_EMPLOYER_H
#include <iostream>
using namespace std;

class Employer
{
    string name, dateOfBirthday, placeOfLife;
    int salary;

    static int employers;
public:
    Employer() : name(""), dateOfBirthday("0.00.0000"), placeOfLife(""), salary(0){};
    Employer(string name, string dateOfBirthday, string placeOfLife, int salary);

//    Copy constructor♥
    Employer(const Employer& other);
    Employer(Employer& other);

//    Move constructor♥
    Employer(Employer&& other);

    string show() const;

    static int countOfEmployers() { return employers; };

    ~Employer();
};


#endif
