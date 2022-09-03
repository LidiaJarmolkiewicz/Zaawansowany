#pragma once
#include"Rectangle.hpp"
class RectangleGenerator
{
public:
	RectangleGenerator(int side1, int side2) :_side1(side1), _side2(side2) {};
	Rectangle generateRandomRectangle();
	int getSide1();
	int getSide2();

private:
	int _side1;
	int _side2;
};

