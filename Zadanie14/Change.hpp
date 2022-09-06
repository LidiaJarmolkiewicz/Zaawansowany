#pragma once
#include<vector>

class Change
{
public:
	std::vector<double> vectorOfValues = { 20000,10000,5000,2000,1000,500,200,100,50,20,10,5,2,1 };
	std::vector<int> vectorOfNumbers;

	
	std::vector<int> change(double);
	void print();
	

private:
	double ammount;
};

