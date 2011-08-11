// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include<iostream>
#include<fstream>
#include<list>
#include "hw1.h"

using namespace std;
int main()
{
	// declare variables
	list<string> dictionary;
	string word;
	ifstream inFile;
	ofstream outFile("sortedDictionary.txt"); // open file stream to write to a file

	inFile.open("Dictionary.txt"); // open file stream to be read

	// fill the list with words from the text file
	while(inFile >> word)
	{
		dictionary.push_back(word);
	}

	// sort the dictionary list of words
	dictionary.sort();

	for(list<string>::iterator i = dictionary.begin(); i != dictionary.end(); i++)
	{
		outFile << *i << endl;
	}

	// close file streams
	inFile.close();
	outFile.close();
	return 0;
}
