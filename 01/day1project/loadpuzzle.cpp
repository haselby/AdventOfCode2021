#include "loadpuzzle.h"

using namespace std;

vector<int> readInFileOfIntegers(string filename, bool verbose) {
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

	if (verbose) {
		cout << "Read-in file: " << filename << endl;
	}
	return vect;
}

