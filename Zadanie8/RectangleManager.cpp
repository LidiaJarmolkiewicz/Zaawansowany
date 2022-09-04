#include "RectangleManager.hpp"
#include"RectangleGenerator.hpp"
#include"Rectangle.hpp"
#include<vector>
#include<algorithm>
#include<iostream>

RectangleManager::RectangleManager(int howMany)
{
	
	RectangleGenerator rectGen;
	for (int i = 0; i < howMany; ++i)
	{
		vecOfRectangles.push_back(rectGen.generateRandomRectangle());
	}
	
}
void printSide(Rectangle rect)
{
	std::cout << rect.getSideA() << "x" << rect.getSideB() << " ; ";
	
}
void RectangleManager::printRectangles()
{

	for_each(vecOfRectangles.begin(), vecOfRectangles.end(),printSide);
	std::cout << std::endl;
}

size_t RectangleManager::countRectangleBiggerThen(int area)
{
	
	int x = 0;
	auto lambda = [&](Rectangle rect) {
		return (rect.countArea() > area);
		
	};
	x = count_if(vecOfRectangles.begin(), vecOfRectangles.end(), lambda);
	std::cout << "prostokatow o polu wiekszym niz "<<area<<" jest " << x << std::endl;

	return x;
}

std::vector<Rectangle> RectangleManager::copyRectangles()
{
	std::vector<Rectangle> vecOfSquares;

	std::copy_if(vecOfRectangles.begin(), vecOfRectangles.end(), std::back_inserter(vecOfSquares), [&](Rectangle rect) {return rect.isSquare(); });
	for_each(vecOfSquares.begin(), vecOfSquares.end(), printSide);
	std::cout << std::endl;

	return vecOfSquares;
}
	

std::vector<Rectangle> RectangleManager::sortAreaDescending()
{
	std::sort(vecOfRectangles.begin(), vecOfRectangles.end(), [](Rectangle rec1, Rectangle rec2) {return(rec1.getArea()> rec2.getArea());});
	for_each(vecOfRectangles.begin(), vecOfRectangles.end(), printSide);
	std::cout << std::endl;

	return vecOfRectangles;
}

std::vector<Rectangle> RectangleManager::deleteInvalid()
{
	auto lambda = [](Rectangle rect) {
		return (rect.getSideA() == 0 || rect.getSideB() == 0);
	};
	vecOfRectangles.erase(std::remove_if(vecOfRectangles.begin(), vecOfRectangles.end(),lambda), vecOfRectangles.end());
	for_each(vecOfRectangles.begin(), vecOfRectangles.end(), printSide);
	return std::vector<Rectangle>();
}


