cmake_minimum_required(VERSION 3.17.1)

set(This GTestExample)

project(${This} C CXX)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(googletest)

set(Headers 
    example.hpp
)

set(Sources
    example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)