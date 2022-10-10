#include "ChangeEUR.hpp"
#include<string>
#include<algorithm>
#include<iostream>

void ChangeEUR::change(double amount)
{
    int numberOfNominals = 0;
    auto lambda = [&](int nominal)
    {if (amount >= nominal)
    {
        numberOfNominals = amount / nominal;
        amount = amount - (nominal * numberOfNominals);
    }
    else
    {

        //double x = amount * 4.7865;
       //ChangePLN::change(x);
    }
    /* while (amount >= nominal)
       {
           amount -= nominal;
           numberOfNominals++;
       }

       {
          double x = amount;
          ChangePLN::change(x);

       }*/
    if (numberOfNominals > 0)
    {
        print(numberOfNominals, nominal);
    }
    numberOfNominals = 0;
    };

    for_each(vectorOfEUR.begin(), vectorOfEUR.end(), lambda);


}

void ChangeEUR::print(int numberOfNominals, int nominal)
{
    std::cout << numberOfNominals << " x nominal: " << nominal << " EUR" << std::endl;
}

int ChangeEUR::getAmount()
{
    return amount;
}
