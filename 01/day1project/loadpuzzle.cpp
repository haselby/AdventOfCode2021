#include "loadpuzzle.h"

using namespace std;

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
