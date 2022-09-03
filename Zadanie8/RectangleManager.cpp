#include "RectangleManager.hpp"
#include"Rectangle.hpp"
#include<vector>
#include<algorithm>

RectangleManager::RectangleManager(int howMany)
{
	howMany = 100;
	RectangleGenerator rectGen(0, 10);
	for (int i = 0; i < howMany; ++i)
	{
		vecOfRectangles.push_back(rectGen.generateRandomRectangle());
	}
	
}
