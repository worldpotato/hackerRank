cmake_minimum_required (VERSION 3.5)

project(virtualFunctions)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17 -Iinclude/")
set (source_dir "${PROJECT_SOURCE_DIR}/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (virtualFunctions ${source_files})

install(TARGETS virtualFunctions DESTINATION "${PROJECT_SOURCE_DIR}")
