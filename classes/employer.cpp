#include "employer.h"
int Employer::employers = 0;

Employer::Employer()
    :People(),dateOfBirthday(""),placeOfLife(""){}

Employer::Employer(string name, int age, int money, string dateOfBirthday, string placeOfLife)
   : People{name, money, age}, dateOfBirthday{dateOfBirthday}, placeOfLife{placeOfLife}
   { employers++; };

Employer::Employer(const Employer& other)
    : People{other}, dateOfBirthday{other.dateOfBirthday}, placeOfLife{other.placeOfLife}
    { employers++; };

Employer::Employer(Employer &&other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife)
{
    other.name = "";
    other.money = 0;
    other.dateOfBirthday = "";
    other.placeOfLife = "";

    employers++;
};

ostream &operator << (ostream &os, Employer &obj)
{
    return os << "Name: " << obj.name << endl
              << "Age: " << obj.age << endl
              << "Date of Birthday: " << obj.dateOfBirthday << endl
              << "Place of Life: " << obj.placeOfLife << endl
              << "Salary: " << obj.money << endl << endl;
};