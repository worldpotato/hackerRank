cmake_minimum_required (VERSION 3.5)

project(compareStudents)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")
set (source_dir "${PROJECT_SOURCE_DIR}/")

file (GLOB source_files "${source_dir}/*.cpp")

add_subdirectory(src/student)

add_executable (compareStudents ${source_files})

target_link_libraries(compareStudents PUBLIC libstudent.so)
target_include_directories(compareStudents PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/src/student/build"
                           )

