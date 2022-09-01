//// Napisz klasê, która umo¿liwi kodowanie i dekodowanie stringa na alfabet Morsea. Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//

#include "Zadanie4.hpp"
#include<algorithm>
#include<vector>
#include<iostream>
#include<string>

std::string KlasaMorseCodeTranslator::toMorseCode(std::string latinString)
{
    std::vector<MorseLatinLetters> alfabet = { { 'a',".- "},{ 'b',"-..." },{'c',"-.-."},{'d',"-.."},{'e',"."} };
    std::string stringToReturn;
    
    for (const auto i : latinString)
    {

        for_each(alfabet.begin(), alfabet.end(), [](MorseLatinLetters) {  stringToReturn +=  });

       
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