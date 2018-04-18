#include <iostream>
#include <string>
#include "FBullCowGame.h"

//using namespace std;

void PrintIntro(int);
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;

std::string PrintBack(std::string &Guess);

int main()
{
	//Introduce the game
	constexpr int WORD_LENGTH = 5;

	PrintIntro(WORD_LENGTH);
	PlayGame();
	return 0;
	
}

void PlayGame()
{

	BCGame.Reset();
	do {
		int MaxTries = BCGame.GetMaxTries();
		// TODO Change this to while loop
		for (int i = 0; i < MaxTries; i++)
		{
			std::string Guess = GetGuess(); // TODO Make loop checking valid
			PrintBack(Guess);
		}
		std::cout << std::endl;
	} while (AskToPlayAgain());

	// TODO Summarise Game
}
	

// Print introduction text to console
void PrintIntro(int wordLength)
{
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << wordLength << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

std::string GetGuess()
{
	// get a guess from the player
	std::string Guess = "";
	std::cout << "Enter your guess: ";
	getline(std::cin, Guess);
	//std::cout << "GetCurrentTry: " << BCGame.GetCurrentTry();
	return Guess;
	
}

std::string PrintBack(std::string &Guess)
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
	std::string Response = "";
	getline(std::cin, Response);


	return (Response[0] == 'y' || Response[0] == 'Y');
}
