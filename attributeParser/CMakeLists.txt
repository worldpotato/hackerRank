cmake_minimum_required (VERSION 3.5)

project(AttributeParser)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++11")
set (source_dir "${PROJECT_SOURCE_DIR}/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (AttributeParser ${source_files})
