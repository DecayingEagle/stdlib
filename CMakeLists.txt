cmake_minimum_required(VERSION 3.10)
project(custom_c_stdlib)

set(CMAKE_C_STANDARD 99)

# Create a static library
add_library(custom_c_stdlib STATIC src/print.c)

# Specify include directories
target_include_directories(custom_c_stdlib PUBLIC include)

# Specify compile options
target_compile_options(custom_c_stdlib PRIVATE -g)

# Create a test executable
add_executable(test.out tests/test.c)

# Link the library to the test executable
target_link_libraries(test.out PRIVATE custom_c_stdlib)