#include "RectangleManager.hpp"
#include"RectangleGenerator.hpp"
#include"Rectangle.hpp"
#include<vector>
#include<algorithm>
#include<iostream>

RectangleManager::RectangleManager(int howMany)
{
	
	RectangleGenerator rectGen(0, 10);
	for (int i = 0; i < howMany; ++i)
	{
		vecOfRectangles.push_back(rectGen.generateRandomRectangle());
	}
	
}
void printSide(Rectangle rect)
{
	std::cout << rect.getSideA() << "," << rect.getSideB() << std::endl;
	
}
void RectangleManager::printRectangles()
{

	for_each(vecOfRectangles.begin(), vecOfRectangles.end(),printSide);
	
}

size_t RectangleManager::countRectangleBiggerThen(int area)
{
	
	int x = 0;
	auto lambda = [&](Rectangle rect) {
		return (rect.countArea() > area);
		
	};
	x = count_if(vecOfRectangles.begin(), vecOfRectangles.end(), lambda);
	std::cout << "prostokatow o polu wiekszym niz "<<area<<" jest " << x << std::endl;

	return size_t();
}

std::vector<Rectangle> RectangleManager::copyRectangles()
{
	std::vector<Rectangle> vecOfSquares;
	vecOfSquares = vecOfRectangles;
	std::copy_if(vecOfRectangles.begin(), vecOfRectangles.end(), vecOfSquares.begin(), [](Rectangle rect) {return rect.isSquare(); });
	for_each(vecOfSquares.begin(), vecOfSquares.end(), printSide);
	return vecOfSquares;
}
	

//void RectangleManager::sortAreaDescending()
//{
//	std::sort(vecOfRectangles.begin(), vecOfRectangles.end(), );
//}


