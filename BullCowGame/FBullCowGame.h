#pragma once
#include <string>
using FString=std::string;
using int32 = int;

struct BullCowCount
{
	int32 Bull = 0;
	int32 Cow = 0;
};

class FBullCowGame
{
public:
	void Reset(int32 WordLength); //TODO make a more rich return value.
	int32 GetMaxTries(FString);	

	bool IsLowerCase(FString) const;

private:
	int32 MyCurrentTry;
	int32 MyMaxTry;

	bool IsIsogram(FString) const;
	

	
};