cmake_minimum_required(VERSION 3.26)
project(SD_C)
set(CMAKE_CXX_STANDARD 23)
include_directories("C:/Users/John Doe/Downloads/opencv/build/include")
add_executable(SD_C main.cpp
        main.h
        calc.cpp
        metric.cpp
        metricSource.cpp
        calcSource.cpp
        Vid_converter.cpp)
