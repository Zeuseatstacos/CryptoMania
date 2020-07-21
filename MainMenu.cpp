/* MainMenu.cpp by Jake Gianola
	Created July 10, 2020
	Last Updated July 10, 2020
	*/
#include <iostream>
using namespace std;

int main() {
	//Initial start at main menu of game
	int difficulty = 0;
	cout << "Hello! Welcome to CryptoMania!\n The game where you crack codes and discover secret phrases!\n Choose your difficulty: \n";
	cin >> difficulty;
	
	//If the difficulty is not valid, loop until valid
	while (difficulty > 1) {
		cout << "Sorry, not a valid difficulty! Please enter a difficulty:\n";
		cin >> difficulty;
	}

	//Launch game with difficulty as arg
	CodeScrambler(difficulty);
}