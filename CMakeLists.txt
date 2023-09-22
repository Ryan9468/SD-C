cmake_minimum_required(VERSION 3.26)
project(SD_C)
set(CMAKE_CXX_STANDARD 23)
add_executable(SD_C main.cpp
        main.h
        calc.cpp
        metric.cpp
        metricSource.cpp
        calcSource.cpp
        CS_Examples.cpp
)
