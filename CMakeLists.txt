cmake_minimum_required(VERSION 3.12)
project(MathUtils)

enable_testing()

add_library(math_utils src/math_utils.cpp)

add_executable(test_math tests/test_math.cpp)

target_link_libraries(test_math 
  PRIVATE 
    math_utils
    gtest_main gtest 
    pthread
)

target_include_directories(test_math 
  PRIVATE 
    ${CMAKE_SOURCE_DIR}/src
)

add_test(NAME test_math COMMAND test_math)