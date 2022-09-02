
#include <iostream>
#include<list>
#include<numeric>
#include<random>

std::vector<int> generateNumbers(std::vector<int>)
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution <int>distribution(1, 100);
    //return distribution(eng);

    std::vector<int> listOf50;

    for (int i = 0; i < 50; ++i)
    {
        listOf50.push_back(distribution(eng));
    }
    return listOf50;
}
void printList(std::vector<int> v)
{
    for (const auto i : v)
    {
        std::cout << i << " ";
    }
}
std::vector<int> createSortedList(std::vector<int>)
{
    std::vector<int> listOfEven;
    std::vector<int> listOfOdd;
    std::vector<int> list2;
    std::vector<int> list;
   list= generateNumbers(list2);
    for( auto it=list.begin(); it!=list.end(); ++it)
    {              
        if (*it % 2 == 0)
        {
            listOfEven.push_back(*it);
        }
        else
        {
            listOfOdd.push_back(*it);
        }
    };
    std::sort(listOfEven.begin(), listOfEven.end());
    std::sort(listOfOdd.begin(), listOfOdd.end(), std::greater<int>());

    auto it = listOfEven.end();
    listOfEven.insert(it, listOfOdd.begin(), listOfOdd.end());
    return listOfEven;
};


int main()
{
    //rintList(generateNumbers());
   
    std::vector<int>sortedList;
    
    printList(generateNumbers(sortedList));
    std::cout <<"____"<< std::endl;
  
    printList(createSortedList(sortedList));
    std::cout <<"...."<< std::endl;
}
