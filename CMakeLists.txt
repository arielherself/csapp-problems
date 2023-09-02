cmake_minimum_required(VERSION 3.26)
project(problems C)

set(CMAKE_C_STANDARD 11)

add_library(commonlib STATIC include/common.c include/common.h)
link_libraries(commonlib)

add_executable(problems main.c)

add_executable(pp.2.12 pp/pp.2.12.c)
add_executable(pp.2.13 pp/pp.2.13.c)
add_executable(pp.2.15 pp/pp.2.15.c)
add_executable(pp.2.36 pp/pp.2.36.c)
add_executable(pp.2.40 pp/pp.2.40.c)
add_executable(pp.2.42 pp/pp.2.42.c)