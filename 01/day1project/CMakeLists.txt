cmake_minimum_required (VERSION 3.21)

project ("day1project")

set(CMAKE_CXX_STANDARD 20)

# Add source to this project's executable.
add_executable (
	day1project
	"day1project.cpp"
	"day1project.h"
	"loadpuzzle.cpp"
	"loadpuzzle.h"
)

# Add tests and install targets if needed.
