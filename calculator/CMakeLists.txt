cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_LIST "./*.cc")
file(GLOB_RECURSE HEADER_LIST "./*.h")

add_executable(Calculator
        ${SOURCE_LIST}
        ${HEADER_LIST})