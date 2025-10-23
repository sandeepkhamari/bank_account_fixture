cmake_minimum_required(VERSION 3.15)
project(BankAccount)

message(STATUS "Executing the top-level CMake file")
message(STATUS "CURRENT_SOURCE_DIR: ${CURRENT_SOURCE_DIR}")

enable_testing()
include(CTest)

message(STATUS "Testing is enabled.")

message(STATUS "Started executing src cmake file.")
add_subdirectory(src)
message(STATUS "End executing src cmake file.")

message(STATUS "")
add_subdirectory(test)
