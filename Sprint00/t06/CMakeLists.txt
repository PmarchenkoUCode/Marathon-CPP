cmake_minimum_required(VERSION 3.18.2)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")

project(t00 LANGUAGES CXX)
set(SOURCE_EXE main.cpp meadSong.cpp)

add_compile_options(
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_executable(meadSong ${SOURCE_EXE})