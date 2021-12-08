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

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

file(COPY "day1test-input.txt" DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(
  day1project_test
  "day1project_test.cpp"
  "loadpuzzle.h"
  "loadpuzzle.cpp"
  "depthfinder.h"
  "depthfinder.cpp"
  )

target_link_libraries(
  day1project_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(day1project_test)