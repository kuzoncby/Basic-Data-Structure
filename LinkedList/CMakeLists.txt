cmake_minimum_required(VERSION 3.5)
project(LinkedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES lib_linked_list.c)
add_executable(LinkedList ${SOURCE_FILES})