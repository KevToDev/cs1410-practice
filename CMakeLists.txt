cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(ex0501 src/ex0501.cpp)
add_executable(ex0502 src/ex0502.cpp)
add_executable(ex0701 src/ex0701.cpp)
add_executable(ex0801 src/ex0801.cpp)
add_executable(ex0802 src/ex0802.cpp src/author.cpp)
add_executable(ex0901 src/ex0901.cpp)
add_executable(ex1001 src/ex1001.cpp)
add_executable(ex1002 src/ex1002.cpp)