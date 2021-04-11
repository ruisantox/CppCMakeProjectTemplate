# Main Project 
#
cmake_minimum_required (VERSION 3.8)

project ("Cpp CMake Project Template Framework" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)


message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")

enable_testing()

# Include sub-projects.
add_subdirectory ("Lib")
add_subdirectory ("MainProgram")
add_subdirectory ("LibTests")


