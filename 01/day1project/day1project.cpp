// day1project.cpp : Defines the entry point for the application.
//

#include "day1project.h"

using namespace std;

int numberOfDepthIncreases(vector<int> vect);
int numberOfDepthSumOfMeasurementIncreases(vector<int> vect);
void printVectorOfIntegers(vector<int> vect);
vector<int> readInFileOfIntegers(string filename);


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

vector<int> readInFileOfIntegers(string filename) {
	vector<int> vect;
	ifstream input;
	input.open(filename);
	string line;
	int x{ 0 };
	while (getline(input, line)) {
		stringstream ss(line);
		ss >> x;
		vect.push_back(x);
	}
	input.close();
	return vect;
}

void printVectorOfIntegers(vector<int> vect) {
	for (auto x : vect)
	{
		cout << x << endl;
	}
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
