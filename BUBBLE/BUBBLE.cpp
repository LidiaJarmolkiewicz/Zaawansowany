
#include <iostream>
#include<vector>
#include<algorithm>
void bubble(std::vector<int>& vect)
{

    for (int k = 1; k < vect.size(); ++k)
    {

        for (int i = 0; i < vect.size() - k; ++i)
        {
            if (vect.at(i) > vect.at(i + 1))
            {
                std::swap(vect.at(i), vect.at(i + 1));
            }
        }
    }

}
void print(std::vector<int>v)
{
    for (const auto& i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}
int main()
{
    std::vector<int>vect = { 9,7,1,3,5,8,11,0 };

    print(vect);
    bubble(vect);
    print(vect);


}
