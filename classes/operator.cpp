#include "operator.h"

Operator::Operator(int x, int y)
{
    this->x = x;
    this->y = y;
};


Operator Operator::operator + () const
{
    return Operator{x + 1, y + 1};
}

Operator Operator::operator + (const Operator& other) const
{
    return Operator{x + other.x, y + other.y};
}


string Operator::showUnary() const
{
    return "\n\nX: " + to_string(x) + "\n" + "Y: " + to_string(y) + "\n";
};

string Operator::showBinary() const
{
    return "\n\nA: " + to_string(x) + "\n" + "B: " + to_string(y) + "\n";
};
