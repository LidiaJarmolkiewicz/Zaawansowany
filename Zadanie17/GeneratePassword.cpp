
#include "GeneratePassword.hpp"
#include<random>
int generateX(int a, int b)
{
	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_int_distribution<int> distr(a, b);
	return distr(eng);
}
char generateChar(std::string s)
{
	char c;
	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_real_distribution<> distr(0,s.size());
	c= distr(eng);
	return s[c];
}

std::string GeneratePassword::generatePassword()
{
	
	std::string password;
	std::string charset1 = "0123456789";
	std::string charset2 = "abcdefghijklmnoprstuvwxyz";
	std::string charset3 = "!?@#$%&+=-";
	std::string charset4 = "ABCDEFGHIJKLMNOPRSTUVWXYZ";

	int passwordLength = generateX(8,12);
	int charLeft = passwordLength;
	int smallLetterCount = generateX(1, passwordLength - 4);
	charLeft -= smallLetterCount;
	int capitalLetterCount = generateX(1, charLeft - 3);
	charLeft -= capitalLetterCount;
	int numbersCount = generateX(1, charLeft - 2);
	charLeft -= numbersCount;
	int specialCharCount = charLeft;


	for (int i = 1; i <= smallLetterCount; ++i)
	{
		password += generateChar(charset2);
	}
	for (int i = 1; i <= capitalLetterCount; ++i)
	{
		password += generateChar(charset4);
	}
	for (int i = 1; i <= numbersCount; ++i)
	{
		password += generateChar(charset1);
	}
	for (int i = 1; i <= specialCharCount; ++i)
	{
		password += generateChar(charset3);
	}
	std::random_shuffle(password.begin(), password.end());
	
	return password;
}