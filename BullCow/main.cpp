#include <iostream>
#include <string>

using namespace std;

void PrintIntro(int);
string GetGuessAndPrintBack();

int main()
{
	//Introduce the game
	constexpr int WORD_LENGTH = 5;
	PrintIntro(WORD_LENGTH);
	
	GetGuessAndPrintBack();

	GetGuessAndPrintBack();

	return 0;
	
}

// Print introduction text to console
void PrintIntro(int wordLength)
{
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << wordLength << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuessAndPrintBack()
{
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "Your guess was " << Guess << endl;
	cout << endl;
	return Guess;
	
}
