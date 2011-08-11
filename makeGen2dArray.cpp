// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include<iostream>

using namespace std;

template<class T>
void makeGen2dArray(T ** &x, int numberOfRows, int rowSize[]) // creates a 2d array
{
	// create rows of pointers
	x = new T *[numberOfRows];

	// make rows point to columns (allocate memory for each row)
	for (int i = 0; i < numberOfRows; i++)
	{
		x[i] = new T [rowSize[i]];
	}
}
