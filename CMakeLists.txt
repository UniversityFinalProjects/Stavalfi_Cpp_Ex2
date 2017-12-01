cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)


add_executable(stavalfi_cpp_ex2 main.cpp tests/test1.cpp)
target_link_libraries(stavalfi_cpp_ex2 gtest gtest_main)



######
#
#set(CMAKE_CXX_STANDARD 11)
#add_subdirectory(lib/googletest-master)
#include_directories(lib/googletest-master/googletest/include)
#include_directories(lib/googletest-master/googlemock/include)
#
#
#set(SOURCE_FILES main.cpp src/FizzBuzz.cpp src/FizzBuzz.h Tests/FizzBuzzTest.cpp)
#add_executable(cpluspluskatas ${SOURCE_FILES})
#
#target_link_libraries(cpluspluskatas gtest gtest_main)