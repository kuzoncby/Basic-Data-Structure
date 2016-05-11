cmake_minimum_required(VERSION 3.5)
project(lib_queue)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES lib_queue.c)
add_executable(lib_queue ${SOURCE_FILES})