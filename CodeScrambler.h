#ifndef CODESCRAMBLER_H
#define CODESCRAMBLER_H

#include <string.h>

class CodeScrambler {
	//FUNCTIONS:
	//Get a randomized amount of words between 1 and 5 from wordlist, dump it into secretphrase
	public:
		CodeScrambler(int diff);
		void wordgrab(int numwords);

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

		//The secret phrase the player has to decode
		char *secretphrase;
};
#endif //CODESCRAMBLER_H