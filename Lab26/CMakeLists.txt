cmake_minimum_required(VERSION 3.15)
project(Lab26 C)

set(CMAKE_C_STANDARD 99)

#add_custom_target(Lab26 COMMAND make -C ${Lab26_SOURCE_DIR}
#                    CLION_EXE_DIR=${PROJECT_BINARY_DIR})

#include_directories( ${Lab26_SOURCE_DIR})
add_executable(Lab26 main.c stack_dynamic.c stack_dynamic.h)
#add_executable(Lab26 main.c stack_static.c stack_static.h)