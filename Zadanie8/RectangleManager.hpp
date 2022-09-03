#pragma once
#include"RectangleGenerator.hpp"
#include"Rectangle.hpp"
#include<vector>


class RectangleManager
{
public:
	RectangleManager(int howMany);
	void printRectangles();
	size_t countRectangleBiggerThen(int area);
	std::vector<Rectangle> copyRectangles();
	void sortAreaDescending();
private:	
	std::vector<Rectangle> vecOfRectangles;
};

