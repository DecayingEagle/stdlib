cmake_minimum_required(VERSION 3.10)
project(custom_c_stdlib)

set(CMAKE_C_STANDARD 99)

# Create a static library
add_library(custom_c_stdlib STATIC src/print.c src/itoa.c)

# Specify include directories
target_include_directories(custom_c_stdlib PUBLIC include)

# Specify compile options
target_compile_options(custom_c_stdlib PRIVATE -g -nostdlib)

# Create a test executable
add_executable(main.out tests/main.c)

# Link the library to the test executable
target_link_libraries(main.out PRIVATE custom_c_stdlib)