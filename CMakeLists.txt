cmake_minimum_required(VERSION 3.26)
project(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(CodingTest
        CodingTest.cpp
        class/clock.h
        class/clock.cpp
        class/clock.h)

add_executable(LinkedList LinkedList.cpp)

add_executable(test1 test.cpp)

add_executable(algorithm
        algorithm/operation.cpp
        algorithm/algori.cpp
        algorithm/algori.h)

add_executable( homework
#        class/homework.cpp
        class/test_clock.cpp
        class/clock.h
        class/clock.cpp
)
