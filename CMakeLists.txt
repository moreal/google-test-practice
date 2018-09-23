cmake_minimum_required(VERSION 2.8)
project(GTestTest)

set(CMAKE_CXX_STANDARD 17)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(GTestTest
        test/main.cpp)

target_link_libraries(GTestTest
        pthread
        gtest
        gtest_main)