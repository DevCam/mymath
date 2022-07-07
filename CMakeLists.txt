cmake_minimum_required(VERSION 3.22)
project(app C)
set(CMAKE_C_STANDARD 99)

add_subdirectory(tests)
add_subdirectory(lib)

add_executable(app app.c)
target_link_libraries(app mymath)

