#pragma once
//Napisz gre w zgadywanie numeru. Program losuje liczbe z przedzia³u 1-100, a uzytkownik proboje zgadn¹æ. 
class GuessTheNumber
{public:
	
	int generateNumber();
	bool guessNumber(int);
	void isClose(int);
	int numberToGuess=0 ;
	
private:
};

