#include "RectangleGenerator.hpp"
#include<random>
#include<iostream>

Rectangle RectangleGenerator::generateRandomRectangle()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(0, 10);
    int side1 = distr(eng);
    int side2 = distr(eng);
    Rectangle rect(side1, side2);
    return rect;
}
