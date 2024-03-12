#include "employer.h"
int Employer::employers = 0;

Employer::Employer()
    :People(),dateOfBirthday(""),placeOfLife(""){}

Employer::Employer(string name, int money, string dateOfBirthday, string placeOfLife)
   : People{name, money}, dateOfBirthday{dateOfBirthday}, placeOfLife{placeOfLife}
{
    employers++;
    cout << "Constructor called" << endl;
};

Employer::Employer(const Employer& other)
    : People{other}, dateOfBirthday{other.dateOfBirthday}, placeOfLife{other.placeOfLife}
{
    employers++;

    cout << "Deep Copy constructor called" << endl;
};

Employer::Employer(Employer &&other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife)
{
    other.name = "";
    other.money = 0;
    other.dateOfBirthday = "";
    other.placeOfLife = "";

    employers++;

    cout << "Move constructor called" << endl;
};

ostream &operator << (ostream &os, Employer &obj)
{
    return os << "Name: " << obj.name << endl << "Date of Birthday: " << obj.dateOfBirthday << endl << "Place of Life: " << obj.placeOfLife << endl << "Salary: " << obj.money << endl << endl;
};