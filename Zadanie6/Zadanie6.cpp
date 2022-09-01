// Zadanie 6
//Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.

#include <iostream>
#include<list>

bool Check(int n)
{
	if (n < 2)
	{
		return false;
	}
	
		for (int i = 2; i <= n; ++i)
		{
			if (n % i != 0)
			{
				return false;
			}
				
			return true;
		}
	
	
	
}

int main()
{
	int n = 1000;
	std::list<int> listOf1000;
	for (int i = 1; i <=n; ++i)
	{
		listOf1000.push_back(i);
	}
	std::list<int> listOfPrims;
	std::list<int> listOfNoPrims;

	 listOfPrims = listOf1000;
	 listOfNoPrims = listOf1000;

	auto CheckIf = [](int x) {return Check(x); };
	listOfPrims.erase(std::remove_if(listOfPrims.begin(), listOfPrims.end(), CheckIf),listOfPrims.end());
	std::cout << "lista liczb pierwszych" << std::endl;
	for (const auto& e : listOfPrims)
	{

		std::cout<< e << " ";
	};

	std::cout << std::endl;
	std::cout << "lista liczb niepierwszych" << std::endl;

	
	auto NotInPrimList = [&listOfPrims](int i) {return  listOfPrims.end() !=  std::find(listOfPrims.begin(), listOfPrims.end(), i); };
	
	listOfNoPrims.erase(std::remove_if(listOfNoPrims.begin(), listOfNoPrims.end(),NotInPrimList), listOfNoPrims.end());
	for (const auto& e : listOfNoPrims)
	{

		std::cout << e << " ";
	};
	
}
