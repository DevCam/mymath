cmake_minimum_required(VERSION 3.22)
project(mymath C)
set(CMAKE_C_STANDARD 99)

add_library(${PROJECT_NAME} mymath.c mymath.h)
