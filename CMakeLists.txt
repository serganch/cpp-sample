cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(Test VERSION 0.0.1 LANGUAGES CXX)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)

file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/generated_sources/version.cpp
    "const char* getVersion() { return \"${Test_VERSION}\"; }"
)

add_executable(TestProject A.cpp main.cpp ${CMAKE_CURRENT_BINARY_DIR}/generated_sources/version.cpp)

