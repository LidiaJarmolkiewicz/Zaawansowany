#include "ChangePLN.hpp"
#include<iostream>
#include <algorithm>

void ChangePLN::print(int numberOfNominals, int nominal)
{
    double nominalDouble = static_cast<double>(nominal);
    std::cout << numberOfNominals << " x nominal: " << nominalDouble / 100 << " zl." << std::endl;

}

double ChangePLN::getAmount()
{
    return amount;
}
void ChangePLN::change(double amount)
{
    std::vector<int> vectorOfPLN_int;
    auto lambda1 = [&](double n)
    {
        int temp = static_cast<int> (n * 100);
        vectorOfPLN_int.push_back(temp);
    };

    std::for_each(vectorOfPLN.begin(), vectorOfPLN.end(), lambda1);

    amount *= 100;
    int numberOfNominals = 0;
    int amountInt = static_cast<int>(amount);
    auto lambda = [&](int nominal)
    {
        while (amountInt >= nominal)
        {
            amountInt -= nominal;
            numberOfNominals++;
        }
        if (numberOfNominals > 0)
        {
            print(numberOfNominals, nominal);
        }
        numberOfNominals = 0;
    };


    std::for_each(vectorOfPLN_int.begin(), vectorOfPLN_int.end(), lambda);


}
