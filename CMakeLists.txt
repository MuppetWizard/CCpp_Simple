cmake_minimum_required(VERSION 3.21)
project(NDK_Simple)

set(CMAKE_CXX_STANDARD 14)

add_executable(NDK_Simple
#        day1_C/ndk_day1.c
        day1_C/support.h
        day1_C/support.c
        day1_C/ndk_day2.c
        day1_C/ndk_day2.h
        day2_Cpp/day2.cpp day2_Cpp/day2.h)
