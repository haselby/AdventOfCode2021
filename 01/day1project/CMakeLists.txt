cmake_minimum_required (VERSION 3.21)

project ("day1project")

set(CMAKE_CXX_STANDARD 20)

file(COPY "day1puzzle-input.txt" DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Add source to this project's executable.
add_executable (
	day1project
	"day1project.h"
	"day1project.cpp"
	"loadpuzzle.h"
	"loadpuzzle.cpp"	
	"depthfinder.h"
	"depthfinder.cpp"
)

# Add tests and install targets if needed.
