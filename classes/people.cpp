#include "people.h"
People::People()
    :People{"",0} {}

People::People(string name,int money)
: name{name},money{money} {};

People::People(const People &other)
{
    name = other.name;
    money = other.money;
}

People::People(People &&other) noexcept : name{std::move(other.name)}, money{other.money}
{
    other.name = "";
    other.money = 0;
}

ostream &operator<<(ostream &os,const People &obj)
{
    os<<"Name: "<<obj.name<<"Money: "<<obj.money;
    return os;
}
