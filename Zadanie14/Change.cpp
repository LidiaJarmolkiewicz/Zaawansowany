#include "Change.hpp"
#include<iostream>



std::vector<int> Change::change(double ammount)
{

    int x;
    ammount *= 100;
    for (auto it = vectorOfValues.begin(); it != vectorOfValues.end(); ++it)
    {
        
        x = ammount/ *it;
        ammount -= *it * x;
     
        vectorOfNumbers.push_back(x);
    }
       
    return vectorOfNumbers;
}

void Change::print()
{
    for (int i = 0; i < vectorOfNumbers.size(); ++i)
    {
        std::cout << vectorOfNumbers[i] << " x nominal: " << vectorOfValues[i]/100 << std::endl;
    }
        
}
