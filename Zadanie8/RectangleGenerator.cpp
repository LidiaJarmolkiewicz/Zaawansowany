#include "RectangleGenerator.hpp"
#include<random>

Rectangle RectangleGenerator::generateRandomRectangle()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(1, 100);
    _side1 = distr(eng);
    _side2 = distr(eng);
    Rectangle rect(_side1, _side2);
    return rect;
}

int RectangleGenerator::getSide1()
{
    return _side1;
}

int RectangleGenerator::getSide2()
{
    return _side2;
}

