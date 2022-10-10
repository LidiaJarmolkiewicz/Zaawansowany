#pragma once
#include<vector>
#include"ChangeA.hpp"

class ChangePLN :public ChangeA
{
public:

	virtual void change(double amount) override;
	virtual void print(int numberOfNominals, int nominal) override;
	double getAmount();
private:
	double amount;
	std::vector<double> vectorOfPLN = { 200.0,10.00,50.0,20.0,10.0,5.0,2.0,1.0,0.5,0.2,0.1,0.05,0.02,0.01 };
};
