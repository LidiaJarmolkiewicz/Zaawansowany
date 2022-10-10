#pragma once

class ChangeA
{

public:

	virtual void change(double) = 0;
	virtual void print(int, int) = 0;
	double getAmount();


private:
	double amount = 0;

};