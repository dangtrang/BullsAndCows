#include "FBullCowGame.h"
#include <map>
#define TMap std::map


void FBullCowGame::Reset(int WordLength)
{
}

int FBullCowGame::GetMaxTries(FString)
{
	return 0;
}

bool FBullCowGame::IsIsogram(FString Word) const
{
	//treat 0 and 1 letter words as isograms
	if (Word.length()<=1)
	{
		return true;
	}
	//setup our map
	TMap<char, bool> LetterSeen;
	for (auto Letter : Word)
	{
		//loop through all the letters of the word
		Letter = tolower(Letter); // handle mixed case
		//if the letter is in the map
		if (LetterSeen[Letter])
		{
			return false; //we do NOT have an isogram
		}			
		//otherwise
		else
		{
			LetterSeen[Letter] = true;//add the letter to the map as seen
		}
	}
	return true; //for example in cases where /0 is entered
}

bool FBullCowGame::IsLowerCase(FString Word) const
{
	for (auto Letter : Word)
	{
		if (!islower(Letter))
		{
			return false;
		}
	}
	return true;
}
