cmake_minimum_required(VERSION 3.21)
project(cds_cpp)

set(CMAKE_CXX_STANDARD 14)
message("hello")

option(USING_ASAN "using asan or not" ON)
if (USING_ASAN)
    message("=========================")
#    set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
#    set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
#    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS}  -fno-omit-frame-pointer -fsanitize=address")
    set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -Werror=foo")
#    message("cmake cxx ${CMAKE_CXX_FLAGS_DEBUG}")
    message("=========================")
endif ()

add_executable(ttt
        main.cpp
        cds_qeuen.cpp
        head.h)


