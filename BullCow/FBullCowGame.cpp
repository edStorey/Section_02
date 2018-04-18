#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	MyCurrentTry = 1;
	MyMaxTries = 5;
}

void FBullCowGame::Reset() 
{
	constexpr int MAX_TRIES = 5;

	MyCurrentTry = 1;
	MyMaxTries = MAX_TRIES;
	return;
}

int FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}