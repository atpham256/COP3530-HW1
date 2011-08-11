// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include<iostream>
#include<vector>

using namespace std;

void addEven2OddLines(const vector<int>& input, vector<int>& result)
{
	 // adds the integer values at even indexes to the integer value of the odd index right below it
	for(int i = 0, j = 0; j < input.size(); i++, j = j + 2)
	{
		result[i] = input[j + 1] + input[j];
	}
}
