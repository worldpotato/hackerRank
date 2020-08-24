cmake_minimum_required (VERSION 3.5)

project(compareStudents)

# compile flags
add_compile_options(-Wall -Wextra -pedantic -Werror)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

set(source_dir "${PROJECT_SOURCE_DIR}/")

file (GLOB source_files "${source_dir}/main.cpp")

add_subdirectory(student)

add_executable (compareStudents ${source_files})

target_link_libraries(compareStudents student)

# move compile_commands to root of the project
# that should be done for ccls
add_custom_command(TARGET compareStudents POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                        ${CMAKE_BINARY_DIR}/compile_commands.json
                        ${PROJECT_SOURCE_DIR}/compile_commands.json
                   )

add_custom_command(TARGET compareStudents POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                        ${CMAKE_BINARY_DIR}/compareStudents
                        ${PROJECT_SOURCE_DIR}/bin/compareStudents
                   )
