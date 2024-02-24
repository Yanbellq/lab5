#include "employer.h"

Employer::Employer(string name, string dateOfBirthday, string placeOfLife, int salary)
{
    this->name = name;
    this->dateOfBirthday = dateOfBirthday;
    this->placeOfLife = placeOfLife;
    this->salary = salary;
};


// Copy constructor♥
Employer::Employer(const Employer& p)
{
    name = p.name;
    dateOfBirthday = p.dateOfBirthday;
    placeOfLife = p.placeOfLife;
    salary = p.salary + 1;
};