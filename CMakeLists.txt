cmake_minimum_required(VERSION 3.6)
project(c7_lesson7_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c7_lesson7_2 ${SOURCE_FILES})