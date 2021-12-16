cmake_minimum_required(VERSION 3.18.2)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")
set(CMAKE_CXX_STANDARD 17)

project(t00 LANGUAGES CXX)
set(SOURCE_EXE main.cpp)

add_compile_options(
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_executable(automaton ${SOURCE_EXE})