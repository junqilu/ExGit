cmake_minimum_required(VERSION 3.9)
project(MultipleInheritanceExample)

set(CMAKE_CXX_STANDARD 14)
set(GPP_ENABLE_WARNINGS "-O0 -Wall -Werror -Wno-unused-result")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GPP_ENABLE_WARNINGS}")
add_executable(MultipleInheritanceExample main.cpp Worker.cpp Worker.h Instructor.cpp Instructor.h Student.cpp Student.h Person.cpp Person.h Researcher.cpp Researcher.h Professor.cpp Professor.h)