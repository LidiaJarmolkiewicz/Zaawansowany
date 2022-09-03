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

int Rectangle::getArea()
{
    return countArea();
}

bool Rectangle::isSquare()
{
    if(getSideA() == getSideA())
    return true;
}
