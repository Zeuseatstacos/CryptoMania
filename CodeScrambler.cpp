#include "CodeScrambler.h"
#include <stdlib.h>
#include <iostream>
#include <string>

CodeScrambler::CodeScrambler(int difficulty){
	CodeScrambler::difficulty = difficulty;
	CodeScrambler::wordnum = rand() % 5 + 1;
	CodeScrambler::wordlist = "usa.txt";
	wordgrab(int numwords, );
}
//VARIABLES
//Number of words in the phrase:
int wordnum;
int difficulty;
bool isTimed;
char** wordlist;
char** secretphrase;

//FUNCTIONS:
//Get a randomized amount of words between 1 and 5 from wordlist, dump it into secretphrase
public void wordgrab(numwords) {
	int secretphrasenum[numwords];
	string secretphrase[5];
	ifstream read;
	int filelinenum = 0;
	string fileline = "";

	
	for (int i = 0; i < numwords; i++) {
		secretphrasenum[i] = rand() % 61335;

		//Read file and get the randomly selected words into secretphrase string array
		read.open(wordlist);
		while (getline(read, fileline)) {
			if (filelinenum == secretphrasenum[i]) {
				strcpy(secretphrase[i], fileline);
				read.close();
				break;
			}

			else {
				filelinenum += 1;
			}
		}

	}


}