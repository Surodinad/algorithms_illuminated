cmake_minimum_required(VERSION 3.10)

project(karatsuba CXX)
set(CMAKE_CXX_STANDARD 17)

set(sources
    main.cpp
)

add_executable(karatsuba ${sources})
