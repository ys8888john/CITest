cmake_minimum_required(VERSION 3.12)
project(MathUtils)

enable_testing()

add_library(math_utils src/math_utils.cpp)

add_executable(test_math tests/test_math.cpp)
target_link_libraries(test_math math_utils gtest_main)

add_test(NAME test_math COMMAND test_math)