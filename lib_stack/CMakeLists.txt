cmake_minimum_required(VERSION 3.5)
project(lib_stack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES lib_stack.c)
add_executable(lib_stack ${SOURCE_FILES})