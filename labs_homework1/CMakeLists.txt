cmake_minimum_required(VERSION 3.5)

project(labs_homework1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(labs_homework1 main.cpp header.h)

install(TARGETS labs_homework1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
