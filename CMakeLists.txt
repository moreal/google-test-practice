cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 17)

# For Coverall
SET(COVERAGE OFF CACHE BOOL "Coverage")

if (COVERAGE)
    target_compile_options(tests PRIVATE --coverage)
    target_link_libraries(tests PRIVATE --coverage)
endif()


add_subdirectory(src)
add_subdirectory(test)
