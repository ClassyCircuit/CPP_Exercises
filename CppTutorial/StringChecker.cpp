#include "StringChecker.h"
#include <iostream>

// Display the text and also the word. Then display if the text contains the word.

// Example: Text - "dog is chasing a fox"; Word - "fox"
// Does text contain the word: True

void CheckIfTextContainsWord(string text, string word)
{
	// Solve the exercise:

	cout << "Text - " << text << "; Word - " << word << endl;
		
		if ((text.find(word)) != string::npos) {
			cout << "Does text contain the word: True" << endl;
			cout << endl;
		}
		else {
			cout << "Does text contain the word: False" << endl;
			cout << endl;
		}
	}

