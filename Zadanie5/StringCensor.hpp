#pragma once
#include<string>
#include<set>

class StringCensor
{
public:
    std::set<char> addCensoredLetter(char c);
    std::string censor(std::string);

};
