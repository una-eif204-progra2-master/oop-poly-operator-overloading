cmake_minimum_required(VERSION 3.17)
project(oop-poly-operator-overloading)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)

## Use next line if you are going to use Google Test
# add_subdirectory(lib/googletest)