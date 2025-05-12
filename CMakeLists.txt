cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(ex01 src/ex01.cpp)
add_executable(ex02 src/ex02.cpp)
add_executable(ex0201 src/ex0201.cpp)
add_executable(ex0202 src/ex0202.cpp)
