#include <iostream>
#include <string>

using namespace std;

int main()
{
	//introduce the game
	constexpr int WORD_LENGTH = 8;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;

	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//repeat the guess back to the player
	cout << "Your guess was:" << Guess << endl;

	return 0;
}