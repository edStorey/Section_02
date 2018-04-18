#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount 
{
	int32 BUlls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:	
	FBullCowGame();
	int32 GetCurrentTry() const;
	int32 GetMaxTries() const;
	bool IsGameWon() const;

	
	

	void Reset(); // TODO Make a more rich return value
	bool CheckGuessValidity(FString); // TODO Make a more rich return value
	// counts cows and butts and increases try #
	FBullCowCount SubmitGuess(FString);

private:
	int32 MyCurrentTry = 3;
	int32 MyMaxTries = 5;
	FString MyHiddenWord;

};