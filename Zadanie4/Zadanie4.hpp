#pragma once

#include<string>
#include<map>
class KlasaMorseCodeTranslator
{
public:
	std::string toMorseCode(std::string);
	std::string fromMorseCode(std::string);

	
};
		
struct MorseLatinLetters
{
	char latin;
	std::string morse;

};
