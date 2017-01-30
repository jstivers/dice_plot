cmake_minimum_required(VERSION 3.6)
project(dice_plot)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES diceplot.cpp)
add_executable(dice_plot ${SOURCE_FILES})