cmake_minimum_required(VERSION 3.10)

# set compiler
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# project name
project(timer)

#set standar c++20
set(CMAKE_CXX_STANDARD 20)

add_executable(timer src/main.cpp)
