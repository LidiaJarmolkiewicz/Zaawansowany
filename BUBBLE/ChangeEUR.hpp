#pragma once
#include"ChangeEUR.hpp"
#include"ChangePLN.hpp"
#include"ChangeA.hpp"
#include<vector>
class ChangeEUR :public ChangeA, public ChangePLN
{

public:

	virtual void change(double amount) override;
	virtual void print(int numberOfNominals, int nominal) override;
	int getAmount();
private:
	int amount;
	std::vector<int> vectorOfEUR = { 500,200,100,50,20,10,5 };

};
