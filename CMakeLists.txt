cmake_minimum_required(VERSION 3.21)
project(NDK_Simple)

set(CMAKE_CXX_STANDARD 14)

add_executable(NDK_Simple day_1/ndk_day1.c day_1/support.h day_1/support.c day_1/ndk_day2.c day_1/ndk_day2.h)
