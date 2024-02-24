#include "employer.h"

Employer::Employer(string name, string dateOfBirthday, string placeOfLife, int salary)
    : name(""), dateOfBirthday("0.00.0000"), placeOfLife("none"), salary(0)
{
    this->name = name;
    this->dateOfBirthday = dateOfBirthday;
    this->placeOfLife = placeOfLife;
    this->salary = salary;
};


// Copy constructor♥
Employer::Employer(const Employer& other)
    : name(""), dateOfBirthday("0.00.0000"), placeOfLife("none"), salary(0)
{
    this->name = other.name;
    this->dateOfBirthday = other.dateOfBirthday;
    this->placeOfLife = other.placeOfLife;
    this->salary = other.salary + 1;
};

//Move constructor♥
Employer::Employer(Employer&& other)
    : name(other.name),
      dateOfBirthday(other.dateOfBirthday),
      placeOfLife(other.placeOfLife),
      salary(other.salary)
{
    other.name = "";
    other.dateOfBirthday = "";
    other.placeOfLife = "";
    other.salary = 0;
};
