#ifndef LAB3_EMPLOYER_H
#define LAB3_EMPLOYER_H
#include <iostream>
using namespace std;

class Employer
{
    string name, dateOfBirthday, placeOfLife;
    int salary;
public:
    Employer() : name(""), dateOfBirthday("0.00.0000"), placeOfLife(""), salary(0){};
    Employer(string name, string dateOfBirthday, string placeOfLife, int salary);

//    Copy constructor♥
    Employer(const Employer& p);

//    Move constructor♥
    Employer(Employer&& p);

    string show()
    {
        return "Name: " + name + "\n" +
               "Date of Birthday: " + dateOfBirthday + "\n" +
               "Place of Life: " + placeOfLife + "\n" +
               "Salary: " + "$" + to_string(salary) +"\n";
    };

    ~Employer()
    {
        cout << "Destructor called\n";
    };
};


#endif
