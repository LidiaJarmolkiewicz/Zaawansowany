#pragma once

#include<string>
#include<map>
#include<string>
class KlasaMorseCodeTranslator
{
public:
	std::string toMorseCode(std::string);
	std::string fromMorseCode(std::string);
private:
	std::map<char, std::string> alfabetMorse = { { 'a',".-"},{ 'b',"-..." },{'c',"-.-."},{'d',"-.."} };
	std::map< std::string, char> alfabetLatin = { { ".-",'a'},{ "-...",'b' },{"-.-.",'c'},{"-..",'d',} };
};
