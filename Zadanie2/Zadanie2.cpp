
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

//Napisz funkcj�, kt�ra przyjmie dwa stringi i zwr�ci ile liter maj� wsp�lnych.

std::vector<char> addTwoStrings(std::string str1, std::string str2)
{
    
    std::vector<char> vec;
    int count = 0;
    for (int i = 0; i < str1.size(); ++i)
    {
        for (int k = 0; k < str2.size(); ++k)
        {
            if (str1.at(i) == str2.at(k))
            {
                vec.push_back(str1.at(i));
               
            }

        }
    }
    return vec;
}


int main()
{
    std::string str1={"motylek"};
    std::string str2={"owad"};
    std::vector<char> vec;
    vec=addTwoStrings(str1, str2);
    int r = vec.size();
    std::cout << " ilosc wspolnych liter wynosi= " << r;
}
