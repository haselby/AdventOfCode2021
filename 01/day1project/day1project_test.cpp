// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.

#include "loadpuzzle.h"
#include "depthfinder.h"
#include "gtest/gtest.h"


namespace {

	// Step 2. Use the TEST macro to define your tests.

	TEST(Day1Part1, Test1) {
		//Read-in puzzle input
		std::vector<int> testInput = readInFileOfIntegers("day1test-input.txt",false);

		//Puzzle, Part 1
		EXPECT_EQ(7, numberOfDepthIncreases(testInput));
		

	}

	TEST(Day1Part2, Test1) {
		//Read-in puzzle input
		std::vector<int> testInput = readInFileOfIntegers("day1test-input.txt",false);

		//Puzzle, Part 1
		EXPECT_EQ(5, numberOfDepthSumOfMeasurementIncreases(testInput));
	}
}  // namespace


// Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.