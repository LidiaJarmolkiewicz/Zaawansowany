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
//std::set<char> StringCensor::addCensoredLetter(char c)
//{
//    std::set<char> listOfChar;
//    listOfChar={'a','z'};
//    return listOfChar;
//   
//}
std::string StringCensor::censor(std::string stringToCensor)
{
    char c='z';
  
    std::replace(stringToCensor.begin(), stringToCensor.end(),c, '*');
    

    return stringToCensor;
}

int main()
{
    
    StringCensor str;
    std::cout << str.censor("sgtdyzn");
   
}
