cmake_minimum_required(VERSION 3.17)
project(unique_id)

set(CMAKE_CXX_STANDARD 20)

add_library(unique_id library.cpp library.h)
add_executable(unique_id_tests tests.cpp library.cpp)

enable_testing()
add_test(unique_id_tests unique_id_tests)