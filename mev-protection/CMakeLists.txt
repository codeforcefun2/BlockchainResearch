cmake_minimum_required(VERSION 3.10)
project(mev_protection)

set(CMAKE_CXX_STANDARD 17)

add_executable(mev_protection src/main.cpp src/mev_monitor.cpp)
