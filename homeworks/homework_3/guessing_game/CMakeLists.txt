cmake_minimum_required(VERSION 3.30)
project(guess)

set (CMAKE_CXX_STANDARD             11)
set (CMAKE_CXX_STANDARD_REQUIRED    YES)
set (CMAKE_CXX_EXTENSIONS           OFF)

add_executable(${PROJECT_NAME} guessing_game.cpp)

