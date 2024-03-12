#include "people.h"
People::People()
    :People("",0, 0) {}

People::People(string name,int money, int age)
    : name(name), money(money), age(age) {};

People::People(const People &other)
    : name(other.name), money(other.money), age(other.age) {}

People::People(People &&other) noexcept
    : name(other.name), money(other.money), age(other.age)
{
    other.name = "";
    other.money = 0;
}

ostream &operator<<(ostream &os,const People &obj)
{
    os<<"Name: "<<obj.name<<"Money: "<<obj.money;
    return os;
}
