# eta-tau Source Code
# (c) osminee, 2025
# A very barebones CMake project, will probably not work

cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_COMPILER gcc)

project(eta-tau)

# whether to display a console or not
option(USE_CONSOLE "Display a console by default (Windows only)" OFF)

# all of the source and header files
set(ETA_TAU_SOURCES
    ./src/cpu.c
    ./src/errlog.c
    ./src/main.c
    ./src/mem.c)
set(ETA_TAU_HEADERS
    ./src/const.h
    ./src/cpu.h
    ./src/errlog.h
    ./src/mem.h)
if(USE_CONSOLE)
    add_executable(${PROJECT_NAME} ${ETA_TAU_SOURCES} ${ETA_TAU_HEADERS})
else(USE_CONSOLE)
    add_executable(${PROJECT_NAME} WIN32 ${ETA_TAU_SOURCES} ${ETA_TAU_HEADERS})
endif(USE_CONSOLE)

target_include_directories(eta-tau PUBLIC ./allegro/include)
target_link_libraries(eta-tau PUBLIC allegro PUBLIC allegro_main PUBLIC allegro_font PUBLIC allegro_ttf PUBLIC allegro_primitives)
target_link_directories(eta-tau PUBLIC ./allegro/lib)