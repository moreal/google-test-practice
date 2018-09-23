cmake_minimum_required(VERSION 3.10)
project(CalculatorTest)

set(CMAKE_CXX_STANDARD 17)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../src)

file(GLOB_RECURSE SOURCE_LIST "../src/*.cc")
file(GLOB_RECURSE TEST_SOURCE_LIST "./*.cc")

add_executable(CalculatorTest
        ${SOURCE_LIST}
        ${TEST_SOURCE_LIST})

target_link_libraries(CalculatorTest
        pthread
        gtest
        gtest_main)