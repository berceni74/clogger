cmake_minimum_required(VERSION 3.10)

project(test C)

add_executable(test
    src/test/main.c 
    src/clogger.c
)