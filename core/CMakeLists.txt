cmake_minimum_required(VERSION 3.29)
project(Hello VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(hello hello.cpp)
