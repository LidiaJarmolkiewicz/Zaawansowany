// klasa: StringCensor
//Napisz klas� kt�ra b�dzie cenzurowa� podane stringi(zamienia� wymagane litery na gwiazk�), operacje kt�ra ma wspiera� ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)


#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include"StringCensor.hpp"
void StringCensor::addCensoredLetter(char c)
{
    CensorSet.insert(c);
      
}

std::string StringCensor::censor(std::string stringToCensor)
{ 
    auto lambda = [=](char &x) {
        if (CensorSet.find(x) != CensorSet.end())
        {
            x = '*';
        }    
    };
    std::for_each(stringToCensor.begin(), stringToCensor.end(), lambda);

    return stringToCensor;
}

int main()
{
    
    StringCensor str;
    str.addCensoredLetter('k');
    str.addCensoredLetter('y');
    std::cout << str.censor("krokodyl");
   
}
