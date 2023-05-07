cmake_minimum_required(VERSION 3.25)
project(FlyweightDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(FlyweightDemo main.cpp lib_before/Person.h lib_before/Student.h lib_before/Teacher.h lib_after/Person.h lib_after/Student.h lib_after/Teacher.h)
