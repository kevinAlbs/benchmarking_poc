cmake_minimum_required(VERSION 3.2)
project (workload_find LANGUAGES CXX)
add_executable (workload_find.out workload_find.cpp)
find_package (benchmark REQUIRED)
target_link_libraries (workload_find.out benchmark::benchmark)
find_package (mongoc-1.0 REQUIRED)
target_link_libraries (workload_find.out mongo::mongoc_shared)