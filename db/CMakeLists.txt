cmake_minimum_required(VERSION 3.24)
project(db)

set(CMAKE_CXX_STANDARD 17)

add_executable(db main.cpp geopoint.cpp geopoint.h)
