#include "depthfinder.h"

using namespace std;

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