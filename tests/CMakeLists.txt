cmake_minimum_required(VERSION 3.22)
project(mymath_tests)
set(CMAKE_C_STANDARD 99)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/Modules/")

find_package(Criterion REQUIRED)

add_executable(${PROJECT_NAME} mymath.test.c)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CRITERION_LIBRARIES} mymath)
target_include_directories(${PROJECT_NAME} PRIVATE ${CRITERION_INCLUDE_DIRS})
