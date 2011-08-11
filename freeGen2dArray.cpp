// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include<iostream>

using namespace std;

template<class Ta>
void freeGen2dArray(Ta ** &x, int numberOfRows) // frees the memory occupied by a 2d array
{
	// free the memory occupied by each row
	for (int i = 0; i < numberOfRows; i++)
	{
		delete [] x[i];
	}

	// free the memory occupied by the row pointers
	delete [] x;
	x = NULL;
}
