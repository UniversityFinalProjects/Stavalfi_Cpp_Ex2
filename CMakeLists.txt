cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2)
set(CMAKE_CXX_STANDARD 11)
include_directories(include)

file(GLOB MY_CPP_FILES src/*.cpp main.cpp)
add_executable(stavalfi_cpp_ex2 ${MY_CPP_FILES})

