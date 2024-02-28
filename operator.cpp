#include "operator.h"

Operator::Operator(int x, int y)
{
    this->x = x;
    this->y = y;
};

string Operator::showUnary() const
{
    return "\n\nX: " + to_string(x) + "\n" + "Y: " + to_string(y) + "\n";
};

string Operator::showBinary() const
{
    return "\n\nA: " + to_string(x) + "\n" + "B: " + to_string(y) + "\n";
};
