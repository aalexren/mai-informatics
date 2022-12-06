cmake_minimum_required(VERSION 3.10)

# set the project name
project(Lab24)

# add the executable
add_executable(main main.cpp)

# specify the C++ standard
set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED YES)
set(CXX_EXTENSIONS NO)

set_target_properties( main
        PROPERTIES
        SUFFIX ".o"
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        )