cmake_minimum_required(VERSION 3.29)
project(Hello VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# see https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html
add_executable(hello hello.cpp)

### GTest
# see https://google.github.io/googletest/quickstart-cmake.html
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

include(GoogleTest)


# add the coolios library
# @see https://cmake.org/cmake/help/latest/guide/tutorial/Adding%20a%20Library.html
add_subdirectory(coolios)
target_link_libraries(hello PUBLIC coolios)
