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
   int o = count(vec.begin(), vec.end(), side::O);
   int r = count(vec.begin(), vec.end(), side::R);
   double oPercent = o / _howMany * 100;
   double rPercent = r / _howMany * 100;
   std::cout << "liczba orlow = " << o<< " a udzial procentowy wynosi = "<< oPercent<<" %"<<std::endl;
   std::cout << "liczba reszek = " << r << " a udzial procentowy wynosi = " << rPercent <<" %"<< std::endl;
 }

void Coin::statictic()
{
    int maxR = 0;
    int countR=0;
    int posR = 0;
    int maxO = 0;
    int countO = 0;
    int posO = 0;
    for (int i=0; i <vec.size(); ++i)
    {
        if ((vec.at(i) ==  side::O))
        {
            countO++;
            if (countO > maxO)
            {
                maxO = countO;
                posO = (i-maxO+1);
            }  
        }
        else 
        {
            countO = 0;
        }
        
    }
    std::cout<<"najdluzszy ciag orlow wynosi " << maxO<<" i jest na pozycji "<<posO<<std::endl;

    for (int i = 0; i < vec.size(); ++i)
    {
        if ((vec.at(i) == side::R))
        {
            countR++;
            if (countR > maxR)
            {
                maxR = countR;
                posR = (i - maxR+ 1);
            }
        }
        else
        {
            countR = 0;
        }

    }
    std::cout << "najdluzszy ciag reszek wynosi " << maxR << " i jest na pozycji " << posR << std::endl;
}

void Coin::longestStringOR()
{
    int count = 1;
    int max = 0;
    int pos = 0;
    for (int i = 1; i < vec.size(); ++i)
    {
             
            if ((vec.at(i - 1)) != (vec.at(i)))
            {
                count++;
                if (count > max)
                {
                    max = count;
                    pos = (i - max + 1);
                }
            }
            else
            {
                count =1;
            }
       
    }
    std::cout << "najdluzszy ciag OR wynosi " << max << " i jest na pozycji " << pos << std::endl;
}


