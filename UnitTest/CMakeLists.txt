cmake_minimum_required(VERSION 2.8)
project(InsertYourProjectNameHere)
set(CMAKE_USE_RELATIVE_PATHS true)

set(TARGET_NAME test-target-name)

set(SOURCES_LIST main.c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89 -Wall -Wextra -pedantic")

add_executable(${TARGET_NAME} ${SOURCES_LIST})

