cmake_minimum_required(VERSION 3.6)
project(Sorting)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp bubblesort.h insertionSort.h selectionSort.h heapSort.h)
add_executable(Sorting ${SOURCE_FILES} bubblesort.h)