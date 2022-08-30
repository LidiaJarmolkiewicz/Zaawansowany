#pragma once
#include<string>
//Napisz klasê StringConverter, która bedzie mia³a dwie metody (statyczne):
//std::string toCamelCase(std::string) -du¿elitery
//std::string toSnakeCase(std::string) podloga
//camelCase : snake_case
//helloSDA : hello_S_D_A
//getColour : get_colour
//isThisFirstEntry : is_this_first_entry

class StringConverter
{
public:
	std::string toCamelCase(std::string);
	std::string toSnakeCase(std::string);
};