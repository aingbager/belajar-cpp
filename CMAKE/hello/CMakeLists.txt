cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
#
# name project
project(hello)

# standart version c++ 23
set(CMAKE_CXX_STANDARD 23)

#execute
add_executable(hello src/main.cpp)
