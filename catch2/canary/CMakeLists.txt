cmake_minimum_required(VERSION 3.2)
project (canary LANGUAGES CXX)
add_executable (canary.out canary.cpp)
target_compile_definitions(canary.out PRIVATE CATCH_CONFIG_ENABLE_BENCHMARKING)