// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079
#include<vector>

#ifndef HW1_H
#define HW1_H

// hw1prob1 functions
// declaration of makeGen2dArray
template<class T>
void makeGen2dArray(T ** &x, int numberOfRows, int rowSize[]);
#include "makeGen2dArray.cpp"
// declaration of freeGen2dArray
template<class Ta>
void freeGen2dArray(Ta ** &x, int numberOfRows);
#include "freeGen2dArray.cpp"

// hw1prob2 functions
// declaration of addEven2OddLines
void addEven2OddLines(const vector<int>& input, vector<int> &result);

#endif
