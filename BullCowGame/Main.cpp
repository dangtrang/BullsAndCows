#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro(int32);
FText GetGuess();
bool DoYouWantToContinue();

int main()
{	
	constexpr char ESC = 27;
	constexpr int32 WORD_LENGTH = 5;
	PrintIntro(WORD_LENGTH);
	bool isContinue = true;
	do
	{		
		bool okie = true;
		FBullCowGame bullCowGame;
		FText Word = GetGuess();
		if (bullCowGame.IsLowerCase(Word))
		{
			std::cout << "Good job!\n";
		}
		else
		{
			std::cout << "Try again!\n";
		}
		isContinue = DoYouWantToContinue();

	} while (isContinue);
	
	return 0;
}

void PrintIntro(int32 n)
{		
	std::cout << "Welcome to Bulls and Cows, a fun word game" << std::endl;
	std::cout << "Could you guess the " << n << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}
bool DoYouWantToContinue()
{
	char yn;
	std::cout << "Do you want to continue? (y/n): ";
	std::cin >> yn;
	std::cout << std::endl;
	if ((yn == 'y') || (yn == 'Y'))
	{
		return true;
	}
	return false;
}

FText GetGuess()
{
	std::cout << "Enter your guess: ";
	FText Guess = "";
	std::cin >> Guess;
	std::cout << "Your guess was: " << Guess << std::endl << std::endl;
	return Guess;
}

