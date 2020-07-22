#include "CodeScrambler.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

CodeScrambler::CodeScrambler(int difficulty){
	CodeScrambler::difficulty = difficulty;
	CodeScrambler::wordnum = rand() % 5 + 1;
	void wordgrab(int numwords);
}
//VARIABLES
//Number of words in the phrase:
int wordnum;
int difficulty;
bool isTimed;
char** secretphrase;

//FUNCTIONS:
//Get a randomized amount of words between 1 and 5 from wordlist, dump it into secretphrase
void wordgrab(int numwords) {
	int secretphrasenum[numwords];
	string secretphrase[numwords];
	ifstream read;
	int filelinenum = 0;
	string fileline = "";

	
	for (int i = 0; i < numwords; i++) {
		secretphrasenum[i] = rand() % 61335;

		//Read file and get the randomly selected words into secretphrase string array
		read.open("usa.txt");
		while (getline(read, fileline)) {
			if (filelinenum == secretphrasenum[i]) {
				secretphrase[i] += fileline;
				read.close();
				break;
			}

			else {
				filelinenum += 1;
			}
		}

	}

};