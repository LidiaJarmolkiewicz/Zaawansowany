#pragma once
#include"RectangleGenerator.hpp"
#include"Rectangle.hpp"
#include<vector>


class RectangleManager
{
public:
	RectangleManager(int howMany);
	void printRectangles();
	
	
private:	
	std::vector<Rectangle> vecOfRectangles;
};

