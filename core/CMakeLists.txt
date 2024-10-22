cmake_minimum_required(VERSION 3.29)
project(core)

set(CMAKE_CXX_STANDARD 23)

add_library(core STATIC lib_hello.cpp
        lib_hello.cpp)
