cmake_minimum_required(VERSION 3.5)
project(lib_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES lib_list.c lib_list.h main.c lib_linkedList.c lib_linkedList.h)
add_executable(lib_list ${SOURCE_FILES})