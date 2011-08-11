// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>
#include <fstream>
#include "hw1.h"

using namespace std;
int main()
{
	// declare variables
	int **x; // a will hold our 2d array
	int r = 0;
	ifstream inFile;
	ofstream outFile("matOut.txt"); // create/open text file stream to be written to

	inFile.open("matInp.txt"); // open text file stream to be read

	inFile >> r; // read first integer
	int rowSizes[r]; // creates array of size n = first integer read from text file

	// fills the array with the next n integers
	for(int i = 0; i < r; i++)
	{
		inFile >> rowSizes[i];
	}

	// call the makeGen2dArray function
	makeGen2dArray(x,r,rowSizes);

	// fill the 2d array
	for(int i = 0; i < r; i++)
	{
		for(int k = 0; k < rowSizes[i]; k++)
		{
			inFile >> x[i][k];
			x[i][k] += 5;
			outFile << x[i][k] << " ";
		}
		outFile << endl;
	}

	// free the memory allocated to the 2d array
	freeGen2dArray(x, r);

	// close text file streams
	inFile.close();
	outFile.close();
	return 0;
}
