#include"Zadanie3.hpp"
#include<vector>
#include<algorithm>
#include <iostream>

std::string StringConverter::toCamelCase(std::string)
{
	char c;
	char d;
	std::string stringToConvert;
	std::vector<char> vec(stringToConvert.begin(),stringToConvert.end());
	
	
	for (int i = 0; i < vec.size(); ++i)
	{
		c = vec.at(i);
		d ='_'+( vec.at(i) + 32);
		if (c >= 65 && c <= 90)
		{
			std::replace(vec.begin(), vec.end(), c, d);
		}

		
	}
	std::string stringToReturn(vec.begin(), vec.end());
	
	return stringToReturn;
	
}


int main()
{
	StringConverter word1;
	std::string str = { "camelCase" };
	std::cout << word1.toCamelCase(str);
	
}

