#include <iostream>
#include <string>

using namespace std;

void PrintIntro(int);
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

string PrintBack(std::string &Guess);

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
	do {
		constexpr int NUMBER_OF_TURNS = 5;
		for (int i = 0; i < NUMBER_OF_TURNS; i++)
		{
			string Guess = GetGuess();
			PrintBack(Guess);
		}
		cout << endl;
	} while (AskToPlayAgain());
}
	

// Print introduction text to console
void PrintIntro(int wordLength)
{
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << wordLength << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuess()
{
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
	
}

string PrintBack(string &Guess)
{
	// repeat the guess back to them
	cout << "Your guess was " << Guess << endl;
	cout << endl;
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? (y/n)";
	cout << endl;
	string Response = "";
	getline(cin, Response);


	return (Response[0] == 'y' || Response[0] == 'Y');
}
