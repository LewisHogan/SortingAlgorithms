cmake_minimum_required(VERSION 3.14.0)

project ( 
    SortingAlgorithms
    VERSION 0.1.0
    DESCRIPTION "Sorting Algorithms and their implementations."
    LANGUAGES CXX
)

add_executable(insertion_sort src/insertion_sort/insertion.cpp)
target_compile_features(insertion_sort PRIVATE cxx_std_17)

add_executable(bubble_sort src/bubble_sort/bubble.cpp)
target_compile_features(bubble_sort PRIVATE cxx_std_17)