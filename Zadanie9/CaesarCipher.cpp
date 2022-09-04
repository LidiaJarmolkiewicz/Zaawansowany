#include "CaesarCipher.hpp"
#include<stdexcept>
#include<exception>

std::string CaesarCipher::cypher(std::string text, int secretValue)
{
	
	std::string textCyphered;
	for (auto it = text.begin(); it != text.end(); ++it)
	{
		if (*it >= 97 && *it <= (122 - secretValue))
		{
			textCyphered += *it + secretValue;
		}
		else if (*it >= (122 - secretValue + 1))
		{
			textCyphered += 97 + secretValue - (122-*it) -1;
		}
		else
		{
			throw std::invalid_argument("mozna uzyc tylko liter z zakresu a-z");
		}
	}
	return textCyphered;
}

std::string CaesarCipher::decypher(std::string text, int secretValue)
{
	std::string textDeCyphered;
	for (auto it = text.begin(); it != text.end(); ++it)
	{
		if (*it >= (97 + secretValue) && *it <= 122 )
		{
			textDeCyphered += *it - secretValue;
		}
		else if (*it <= (97 + secretValue - 1))
		{
			textDeCyphered += 122 -secretValue + (*it-97) + 1;
		}
		else
		{
			throw std::invalid_argument("mozna uzyc tylko liter z zakresu a-z");
		}
	}
	return textDeCyphered;
}
