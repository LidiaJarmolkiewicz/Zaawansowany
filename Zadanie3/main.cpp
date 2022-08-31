#include"Zadanie3.hpp"
#include<iostream>

int main()
{
	StringConverter word;

	std::cout << word.toSnakeCase("helloSDA") << std::endl;
	std::cout << word.toCamelCase("hello_s_d_a") << std::endl;
	std::cout << word.toSnakeCase("isThisFirstEntry") << std::endl;
	std::cout << word.toCamelCase("is_this_first_entry") << std::endl;

}
