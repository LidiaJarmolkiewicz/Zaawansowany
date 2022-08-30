# include<iostream>
#include<string>
#include<algorithm>

std::string str;
std::string reverseString(std::string str)
{
	std::reverse(str.begin(), str.end());
	return str;
}

int main()
{
	std::string str = { "CPPzaawansowany" };
	std::cout << reverseString(str);
	
}