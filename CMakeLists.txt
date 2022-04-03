cmake_minimum_required(VERSION 3.21)
project(TP1)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/*.hpp" "main.cpp")
add_executable(TP1 ${SOURCES})

# using MinGW compiler with g++

target_compile_options(TP1 PUBLIC -save-temps=obj)
target_compile_options(TP1 PUBLIC -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Wold-style-cast)
target_compile_options(TP1 PUBLIC -O3 -ffast-math -Os)

# flag to output assembler
