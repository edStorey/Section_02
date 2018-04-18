/*This is the console executable, that makes use of the BullCow class
This acts as the view in a MVCpattren is responsible for all user 
interaction. For game logic see the FBullCosGame class
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"
using FText = std::string;
using int32 = int;

//using namespace std;

void PrintIntro(int32);
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;

FText PrintBack(FText &Guess);

int main()
{
	//Introduce the game
	constexpr int32 WORD_LENGTH = 5;

	PrintIntro(WORD_LENGTH);
	PlayGame();
	return 0;
	
}

void PlayGame()
{

	BCGame.Reset();
	do {
		int32 MaxTries = BCGame.GetMaxTries();
		// TODO Change this to while loop
		for (int32 i = 0; i < MaxTries; i++)
		{
			std::cout << "Try " << BCGame.GetCurrentTry() << ". ";
			FText Guess = GetGuess(); // TODO Make loop checking valid
			PrintBack(Guess);
		}
		std::cout << std::endl;
	} while (AskToPlayAgain());

	// TODO Summarise Game
}
	

// Print introduction text to console
void PrintIntro(int32 wordLength)
{
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << wordLength << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

FText GetGuess()
{
	// get a guess from the player
	FText Guess = "";
	std::cout << "Enter your guess: ";
	getline(std::cin, Guess);
	//std::cout << "GetCurrentTry: " << BCGame.GetCurrentTry();
	return Guess;
	
}

FText PrintBack(FText &Guess)
{
	// repeat the guess back to them
	std::cout << "Your guess was " << Guess << std::endl;
	std::cout << std::endl;
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n)";
	std::cout << std::endl;
	FText Response = "";
	getline(std::cin, Response);


	return (Response[0] == 'y' || Response[0] == 'Y');
}
