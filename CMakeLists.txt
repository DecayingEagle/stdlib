cmake_minimum_required(VERSION 3.10)
project(custom_c_stdlib)
set(CMAKE_C_STANDARD 99)

# Suppress warnings
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-builtin-declaration-mismatch -Wno-implicit-function-declaration")

# Collect all source files in the src/ directory
file(GLOB SOURCES "src/*.c")

# Create a static library
add_library(custom_c_stdlib STATIC ${SOURCES})

# Specify include directories
target_include_directories(custom_c_stdlib PUBLIC include)

# Specify compile options
target_compile_options(custom_c_stdlib PRIVATE -g -nostdlib)

# Create a test executable
add_executable(main.out tests/main.c)

# Link the library to the test executable
target_link_libraries(main.out PRIVATE custom_c_stdlib)