cmake_minimum_required(VERSION 3.10)
project(security_analyzer)

set(CMAKE_CXX_STANDARD 17)

add_executable(security_analyzer src/main.cpp src/analyzer.cpp)
