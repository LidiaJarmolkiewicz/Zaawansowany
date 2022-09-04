#include "GuessTheNumber.hpp"
#include"GuessTheNumber.hpp"
#include<random>
#include<iostream>

int GuessTheNumber::generateNumber()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution <int> distr(1, 100);
    return distr(eng);
}

bool GuessTheNumber::guessNumber(int numberOfAttempts)
{
    numberToGuess = generateNumber();
    
    int x = 0;
    for (int i = 1; i <= +numberOfAttempts; ++i)
    {
        std::cout << "podaj liczbe " << std::endl;
        std::cin >> x;
        if (x < numberToGuess)
        {
            std::cout << "podana liczba jest za mala, pozostalo ci "<< (numberOfAttempts-i)<<" prob" << std::endl;
            isClose(x);
        }
        else if (x > numberToGuess)
        {
            std::cout << "podana liczba jest za duza, pozostalo ci "<< (numberOfAttempts-i)<<" prob" << std::endl;
            isClose(x);
        }
        else
        {
            std::cout << "bingo! " << std::endl;
            return 0;
        }
    }
   
}

void GuessTheNumber::isClose(int x)
{
    if( (x<numberToGuess) && (x > (numberToGuess - 3))||(x>numberToGuess) &&( x < (numberToGuess + 3)))
    {
        std::cout << "jestes blisko zgadywanej liczby " << std::endl;
    }

    
}
