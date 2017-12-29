cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2) # name of the project
set(CMAKE_CXX_STANDARD 11) # c++ version
include_directories(include) # include all header files under directory "include" so we can use them

file(GLOB MY_CPP_FILES src/*.cpp main.cpp) # include all cpp files under directory "src"
add_executable(stavalfi_cpp_ex2 ${MY_CPP_FILES}) #run the program

