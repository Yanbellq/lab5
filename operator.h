#ifndef LAB3_OPERATOR_H
#define LAB3_OPERATOR_H
#include <iostream>
using namespace std;

class Operator
{
    int x, y;
public:
    Operator(int x, int y);

    // Перевантаження унарного оператора
    Operator operator+() const
    {
        return Operator{x, y};
    };


    Operator operator+(const Operator& other) const {
        return Operator{x + other.x, y + other.y};
    }

    string show();
};


#endif
