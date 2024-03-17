#include "people.h"

void People::show() const
{
    cout << "Name: " << name << endl;
    cout << "Money: $" << money << endl;
    cout << "Age: " << age << "y.o" << endl;
}

People::People()
    :People("",0, 0) {}

People::People(string name,int money, int age)
    : name(name), money(money), age(age > 0 ? age : 100) {};

People::People(const People &other)
    : name(other.name), money(other.money), age(other.age) {}

People::People(People &&other)
    : name(other.name), money(other.money), age(other.age)
{
    other.name = "";
    other.money = 0;
}
