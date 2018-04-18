#include <string>

class FBullCowGame
{

public:	
	FBullCowGame();
	int GetCurrentTry() const;
	int GetMaxTries() const;
	bool IsGameWon() const;
	

	void Reset(); // TODO Make a more rich return value
	bool CheckGuessValidity(std::string); // TODO Make a more rich return value
	// PROVIDE A METHOD FOR COUNTING BULLS AND COWS, AND INCREASING TURNS #

private:
	int MyCurrentTry = 3;
	int MyMaxTries = 5;

};