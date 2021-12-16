cmake_minimum_required(VERSION 3.16)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")
project(inventory)
set(SOURCE_EXE main.cpp)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)
set(SOURCE_EXE src/commands.cpp src/validate.cpp main.cpp)

add_executable(inventory ${SOURCE_EXE})