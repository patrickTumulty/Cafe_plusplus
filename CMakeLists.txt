cmake_minimum_required(VERSION 3.16.4)

project(Cafe)

include(gtest.cmake)

find_package(Threads)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Werror -pthread")

add_executable(cafe src/main.cpp 
    src/cafe.cpp
    src/interface.cpp
    src/item.cpp
    )
add_executable(cafe-tests test/test.cpp 
    src/cafe.cpp
    src/interface.cpp
    src/item.cpp
    )

target_link_libraries(cafe-tests ${CMAKE_THREADS_LIBS_INIT} gtest)