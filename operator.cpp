#include "operator.h"

Operator::Operator(int x, int y)
{
    this->x = x;
    this->y = y;
};

string Operator::show()
{
    return "\n\nX: " + to_string(x) + "\n" + "Y: " + to_string(y) + "\n";
};
