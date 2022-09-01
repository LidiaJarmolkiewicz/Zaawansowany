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
    std::map<char, std::string> alfabetMorse = { { 'a',".- "},{ 'b',"-..." },{'c',"-.-."},{'d',"-.."},{'e',"."} };

    std::map< std::string, char> alfabetLatin;


    std::string stringToReturn;
    
    for (const auto i : latinString)
    {
      
        
        for_each(alfabetMorse.begin(), alfabetMorse.end(), [&alfabetMorse](char x) { auto it = alfabetMorse.find(x); return it->second;
        
            });
        
      
    }
    return stringToReturn;
}

    int main()
    {
        KlasaMorseCodeTranslator word;
        std::cout << word.fromMorseCode("abc");
    }


    /*char latin;
    std::string morse;*/