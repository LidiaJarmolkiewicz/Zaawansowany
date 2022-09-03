#include "RectangleManager.hpp"
#include"RectangleGenerator.hpp"
#include"Rectangle.hpp"
#include<vector>
#include<algorithm>
#include<iostream>

RectangleManager::RectangleManager(int howMany)
{
	howMany = 100;
	RectangleGenerator rectGen(0, 10);
	for (int i = 0; i < howMany; ++i)
	{
		vecOfRectangles.push_back(rectGen.generateRandomRectangle());
	}
	
}

void RectangleManager::printRectangles()
{

	for_each(vecOfRectangles.begin(), vecOfRectangles.end(),printSide);
	
}
bool printSide(Rectangle rect)
{
	std::cout << rect.getSideA() << "," << rect.getSideB() << std::endl;
	return true;
}

