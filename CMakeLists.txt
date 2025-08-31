cmake_minimum_required(VERSION 3.10)

# Project name
project(dotfetch)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Collect all source files in src/
file(GLOB SRC_FILES src/*.cpp)

# Add executable from sources
add_executable(dotfetch ${SRC_FILES})

# Add include directory
target_include_directories(dotfetch PRIVATE include)
