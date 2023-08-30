cmake_minimum_required(VERSION 3.26)
project(problems C)

set(CMAKE_C_STANDARD 11)

add_library(commonlib STATIC pp/include/common.c pp/include/common.h)

add_executable(problems main.c)

add_executable(pp.2.12 pp/pp.2.12.c)
target_link_libraries(pp.2.12 commonlib)

add_executable(pp.2.13 pp/pp.2.13.c)
target_link_libraries(pp.2.13 commonlib)
