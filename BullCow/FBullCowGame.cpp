#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	MyCurrentTry = 1;
	MyMaxTries = 5;
}

void FBullCowGame::Reset() 
{
	constexpr int32 MAX_TRIES = 5;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	
	return;
}

int32 FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

int32 FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}

// receives a valid guess, increments
FBullCowCount FBullCowGame::SubmitGuess(FString)
{
	// increment the turn number
	MyCurrentTry++;

	// setup a return variable
	FBullCowCount bullCowCount;


	// loop through all etter in the guess
		// compare letter against the hidde word


	return bullCowCount;
}
