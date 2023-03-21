cmake_minimum_required(VERSION 3.0)
project(multiple_files)

set(CMAKE_CXX_STANDARD 23)

add_executable(multiple_files main.cpp odd_even.h odd_even.cpp)
