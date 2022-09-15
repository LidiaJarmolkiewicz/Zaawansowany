#include "Coin.hpp"
#include<vector>
#include<random>
#include<iostream>
#include<algorithm>


Coin::Coin(int howMany):_howMany(howMany)
{
   
    for (int i = 1; i <= _howMany; ++i)
    {
        side n = generateThrow();
        if (n == side::O)
        {
            std::cout << "O";
            vec.push_back(n);
        }
        else if (n == side::R)
        {
            std::cout <<"R";
            vec.push_back(n);
        }

        if (i % 20 == 0)
        {
            std::cout << std::endl;
        }
    }
   
}

side Coin::generateThrow()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(1, 2);
    int x = distr(eng);
    if (x == 1)
    {
        return side::O;
    }
    else
    {
        return side::R;
    }
   
}

void Coin::howManyOR()
{
   
    double o = count(vec.begin(), vec.end(), side::O);
   double r = count(vec.begin(), vec.end(), side::R);
   double oPercent = o / _howMany * 100;
   double rPercent = r / _howMany * 100;
   std::cout << "liczba orlow = " << o<< " a udzial procentowy wynosi = "<< oPercent<<" %"<<std::endl;
   std::cout << "liczba reszek = " << r << " a udzial procentowy wynosi = " << rPercent <<" %"<< std::endl;

}


