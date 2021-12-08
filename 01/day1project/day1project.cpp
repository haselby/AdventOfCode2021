// day1project.cpp : Defines the entry point for the application.
//

#include "day1project.h"
#include "loadpuzzle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;

int numberOfDepthIncreases(vector<int> vect);
int numberOfDepthSumOfMeasurementIncreases(vector<int> vect);


int main()
{
	//Test Input
	//vector<int> TestInput = readInFileOfIntegers("C:\\GitHubPub\\AdventOfCode2021\\01\\day1project\\day1test1-input.txt");

	//Part 1
	cout << "Running Day 1 Program" << endl;
	vector<int> puzzleInput = readInFileOfIntegers("C:\\GitHubPub\\AdventOfCode2021\\01\\day1project\\day1puzzle-input.txt");
	printVectorOfIntegers(puzzleInput);
	cout << "Number of times a depth measurement increased: " << numberOfDepthIncreases(puzzleInput) << endl;

	//Part 2
	cout << "Number of times a sum of depth measurement increased: " << numberOfDepthSumOfMeasurementIncreases(puzzleInput) << endl;
	return 0;
}


int numberOfDepthIncreases(vector<int> vect) {

	int sizeOfVector = vect.size();
	int depthIncrease{ 0 };

	for (size_t i = 0; i < sizeOfVector - 1; i++)
	{
		if (vect[i + 1] > vect[i]) {
			depthIncrease++;
		}
	}

	return depthIncrease;
}

int numberOfDepthSumOfMeasurementIncreases(vector<int> vect) {

	int sizeOfVector = vect.size();
	int depthIncrease{ 0 };

	for (size_t i = 0; i < sizeOfVector - 3; i++)
	{
		if ((vect[i + 1] + vect[i + 2] + vect[i + 3]) > (vect[i] + vect[i + 1] + vect[i + 2])) {
			depthIncrease++;
		}
	}

	return depthIncrease;
}
