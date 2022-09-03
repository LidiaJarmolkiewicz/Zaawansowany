#include "Rectangle.hpp"

int Rectangle::countArea()
{
    return (_a * _b);
}

int Rectangle::getSideA()
{
    return _a;
}

int Rectangle::getSideB()
{
    return _b;
}

bool Rectangle::isSquare()
{
    if(_a == _b)
    return true;
}
