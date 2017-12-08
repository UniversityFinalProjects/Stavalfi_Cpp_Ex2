cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
include_directories(include)

file(GLOB MY_CPP_FILES src/*.cpp main.cpp)
add_executable(stavalfi_cpp_ex2 ${MY_CPP_FILES})
target_link_libraries(stavalfi_cpp_ex2 gtest gtest_main)