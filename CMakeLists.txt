cmake_minimum_required(VERSION 3.8)
project(HouseFrey)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Roman.cpp Roman.h)
add_executable(HouseFrey ${SOURCE_FILES})