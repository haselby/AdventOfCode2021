#include "day1project.h"

using namespace std;

int main()
{
	//Test Input
	//vector<int> TestInput = readInFileOfIntegers("day1test1-input.txt");

	
	cout << "Running Day 1 Program" << endl;

	//Read-in puzzle input
	vector<int> puzzleInput = readInFileOfIntegers("day1puzzle-input.txt");

	//Puzzle, Part 1
	cout << "Number of times a depth measurement increased: " << numberOfDepthIncreases(puzzleInput) << endl;

	//Puzzle, Part 2
	cout << "Number of times a sum of depth measurement increased: " << numberOfDepthSumOfMeasurementIncreases(puzzleInput) << endl;
	
	return 0;
}
