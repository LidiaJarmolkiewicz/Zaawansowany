
#include <iostream>
#include<string>
#include<set>
#include<algorithm>

//Napisz funkcjê, która przyjmie dwa stringi i zwróci ile liter maj¹ wspólnych.

std::set<char> addTwoStrings(std::string str1, std::string str2)
{
    
    std::set<char> set1;
    int count = 0;
    for (int i = 0; i < str1.length(); ++i)
    {
        for (int k = 0; k < str2.length(); ++k)
        {
            if (str1.at(i) == str2.at(k))
            {
                set1.insert(str1.at(i));
               
            }

        }
    }
    return set1;
}


int main()
{
    std::string str1={"kasia"};
    std::string str2={"tasia"};
    std::set<char> lista;
    lista= addTwoStrings(str1, str2);
    int r = lista.size();
    std::cout << " ilosc wspolnych liter wynosi= " << r;
}
