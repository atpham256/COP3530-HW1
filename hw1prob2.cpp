// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include<iostream>
#include<vector>
#include<fstream>
#include "hw1.h"

using namespace std;
int main()
{
	// declare varibles
	int x;
	vector<int> inputVector;
	vector<int> resultVector;
	ifstream inFile;
	ofstream outFile("prob2Output.txt"); // open file stream to write to a file

	inFile.open("prob2Input.txt"); // open file stream to be read
	while(inFile >> x) // fill the vector with the numbers from the text file
	{
		inputVector.push_back(x);
	}

	resultVector.resize((inputVector.size()/2)); // the resultVector should be half the size of the inputVector

	// call function addEven2OddLines
	addEven2OddLines(inputVector, resultVector);

	for(int i = 0; i < resultVector.size(); i++)
	{
		outFile << resultVector[i] << endl;
	}

	// close file streams
	inFile.close();
	outFile.close();
	return 0;
}

