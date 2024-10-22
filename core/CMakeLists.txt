cmake_minimum_required(VERSION 3.29)
project(Hello VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# see https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html
add_executable(hello hello.cpp)

# add the coolios library
# @see https://cmake.org/cmake/help/latest/guide/tutorial/Adding%20a%20Library.html
add_subdirectory(coolios)
target_link_libraries(hello PUBLIC coolios)
