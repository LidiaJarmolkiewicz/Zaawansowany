//// Napisz klasê, która umo¿liwi kodowanie i dekodowanie stringa na alfabet Morsea. Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//

#include "Zadanie4.hpp"
#include<algorithm>
#include<map>
#include<iostream>
#include<string>

std::string KlasaMorseCodeTranslator::toMorseCode(std::string latinString)
{

    std::string stringToReturn;
    
    for (const auto i : latinString)
    {
        //stringToReturn += alfabetMorse[i] + ' ';
        stringToReturn += alfabetMorse.at(i) + ' ';
    }
    return stringToReturn;
}

std::string KlasaMorseCodeTranslator::fromMorseCode(std::string morseString)
{
   
    std::string stringToReturn={};
    std::string s;

    auto lambda = [&](char x) {
        
            if (x != ' ')
            {
                s += x;
            }
            else if (x == ' ')
            {
                s = alfabetLatin.at(morseString);
                stringToReturn += s;
                
            }
          
            
       
    };
    std::for_each(morseString.begin(), morseString.end(), lambda);
    
    return stringToReturn;
}

    int main()
    {
        KlasaMorseCodeTranslator word;
        std::cout << word.toMorseCode("abcd")<<std::endl;
        std::cout << word.fromMorseCode("-.. -.-. -... ");
    }


    