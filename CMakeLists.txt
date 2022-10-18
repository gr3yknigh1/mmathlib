cmake_minimum_required(VERSION 3.0)
project(mathlib C)
set(CMAKE_C_STANDARD 99)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)

set(SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src")

file(
  GLOB_RECURSE
  PROJECT_SOURCES
  CONFIGURE_DEPENDS
  "${SOURCE_DIR}/*.c"
  )

set(PROJECT_INCLUDE "${SOURCE_DIR}/")

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCES})
target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  ${PROJECT_INCLUDE}
  )

