cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED YES)
set(CMAKE_C_EXTENSIONS OFF)  # Disable GNU extensions
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wpedantic -Wextra")

set(SOURCE_FILES main.c)
add_executable(untitled ${SOURCE_FILES})