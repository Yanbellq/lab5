#include "employer.h"
int Employer::employers = 0;

void Employer::show() const
{
    People::show();
    cout << "Date of Birthday: " << dateOfBirthday << endl;
    cout << "Place of Life: " << placeOfLife << endl;
};

Employer::Employer()
    :People(),dateOfBirthday(""),placeOfLife("")
    { employers++; }

Employer::Employer(string name, int age, int money, string dateOfBirthday, string placeOfLife)
    : People(name, money, age), dateOfBirthday(dateOfBirthday), placeOfLife(placeOfLife)
    { employers++; };

Employer::Employer(const Employer& other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife)
    { employers++; };

Employer::Employer(Employer &&other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife)
{
    other.name = "";
    other.age = 0;
    other.money = 0;
    other.dateOfBirthday = "";
    other.placeOfLife = "";

    employers++;
};

ostream &operator << (ostream &os, Employer &obj)
{
    return os << "Name: " << obj.name << endl
              << "Age: " << obj.age << "y.o." << endl
              << "Date of Birthday: " << obj.dateOfBirthday << endl
              << "Place of Life: " << obj.placeOfLife << endl
              << "Salary: $" << obj.money << endl << endl;
};