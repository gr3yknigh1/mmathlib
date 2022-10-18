cmake_minimum_required(VERSION 3.0)
project(mathlib C)
set(CMAKE_C_STANDARD 99)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)

# -- Include source files
set(SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src")

# Grab all source files and put in PROJECT_SOURCES
file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS "${SOURCE_DIR}/*.c")

# Define PROJECT_INCLUDE
set(PROJECT_INCLUDE "${SOURCE_DIR}/")

# Declaring our executable
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE})

