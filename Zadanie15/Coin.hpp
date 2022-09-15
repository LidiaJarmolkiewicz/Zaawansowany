#pragma once
#include<vector>
enum class side{O,R};
class Coin
{
public:
	Coin(int howMany);
	
	std::vector<side> vec;
	side generateThrow();
	void howManyOR();
private:
	int _howMany;
};

