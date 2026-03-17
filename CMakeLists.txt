cmake_minimum_required(VERSION 3.10)

project(clogger C)

add_library(clogger
    src/clogger.c
)

add_executable(clogtest 
    src/test/main.c
)

target_include_directories(clogger
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(clogtest clogger)

install(TARGETS clogger DESTINATION lib)
install(FILES src/clogger.h DESTINATION include)
