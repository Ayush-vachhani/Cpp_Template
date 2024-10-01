cmake_minimum_required(VERSION 3.28.3)
project(CPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP main.cpp)

# Define the precompiled header
target_precompile_headers(CPP PRIVATE pch.h)