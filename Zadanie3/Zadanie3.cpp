#include"Zadanie3.hpp"
#include<vector>
#include<algorithm>
#include <iostream>

std::string StringConverter::toCamelCase(std::string snakeString)
{

	std::string stringToReturn;
	for (auto it = snakeString.begin(); it != snakeString.end(); ++it)
	{
		if (*it =='_')
		{
			it++;
			stringToReturn.push_back(toupper(*it));
		}
		else
		{
			stringToReturn.push_back(*it);
		}
	}

	return stringToReturn;

}






std::string StringConverter::toSnakeCase(std::string camelString)
{

	
	std::string stringToReturn;
	for (auto it = camelString.begin(); it != camelString.end(); ++it)
	{
		if (*it >= 65 && *it <= 90)
		{
			stringToReturn.push_back('_');
			stringToReturn.push_back(tolower( * it));
		}
		else
		{
			stringToReturn.push_back(*it);
		}
	}

	return stringToReturn;

}


