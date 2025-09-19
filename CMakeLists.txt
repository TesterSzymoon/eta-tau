# eta-tau Source Code
# (c) osminee, 2025
# A very barebones CMake project, will probably not work

cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_COMPILER gcc)

project(eta-tau)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} "-L./allegro/bin/allegro-5.2.dll")