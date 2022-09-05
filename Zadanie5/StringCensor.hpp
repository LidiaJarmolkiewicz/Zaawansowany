#pragma once
#include<string>
#include<set>

class StringCensor
{
public:
    void addCensoredLetter(char );
    std::string censor(std::string);

    std::set<char> censorSet;
private:
   
};
