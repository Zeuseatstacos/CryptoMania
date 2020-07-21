#ifndef CODESCRAMBLER_H
#define CODESCRAMBLER_H

#include <string>

class CodeScrambler {
	//FUNCTIONS:
	//Get a randomized amount of words between 1 and 5 from wordlist, dump it into secretphrase
	public:
		CodeScrambler();
		void wordgrab();

	private:
		//VARIABLES
		//Number of words in the phrase:
		int wordnum;

		//Determines which cipher to use.
		/*
		1 = A1Z26 cipher
		2 = Caesar Cipher
		*/
		int difficulty;

		//Determines if player is timed or not
		bool isTimed;

		//The list of words to choose from, should be the same exact list each time
		string wordlist[wordnum];

		//The secret phrase the player has to decode
		string secretphrase;
};
#endif //CODESCRAMBLER_H