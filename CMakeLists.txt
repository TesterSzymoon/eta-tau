# eta-tau Source Code
# (c) osminee, 2025
# A very barebones CMake project, will probably not work

cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_COMPILER gcc)

project(eta-tau)

find_package(PkgConfig REQUIRED)
pkg_check_modules(ALLEGRO5 REQUIRED allegro-5 allegro_main-5)

# set this if you want to provide allegro in the current dir
option(USE_ALLEGRO_IN_DIR "Link Allegro provided in the \"allegro\" directory (located in current working directory)" OFF)

# all of the source and header files
set(ETA_TAU_SOURCES
    ./src/errlog.c
    ./src/main.c
    ./src/mem.c)
set(ETA_TAU_HEADERS
    ./src/const.h
    ./src/errlog.h
    ./src/mem.h)

add_executable(${PROJECT_NAME} ${ETA_TAU_SOURCES} ${ETA_TAU_HEADERS})

if(USE_ALLEGRO_IN_DIR)
    target_include_directories(eta-tau PUBLIC ./allegro/include)
else(USE_ALLEGRO_IN_DIR)
    target_include_directories(eta-tau PUBLIC ${ALLEGRO5_INCLUDE_DIRS})
endif(USE_ALLEGRO_IN_DIR)
target_compile_options(eta-tau PUBLIC ${ALLEGRO5_CFLAGS_OTHER})
target_link_libraries(eta-tau ${ALLEGRO5_LIBRARIES})
if(USE_ALLEGRO_IN_DIR)
    target_link_directories(eta-tau PUBLIC ./allegro/lib)
else(USE_ALLEGRO_IN_DIR)
    target_link_directories(eta-tau PUBLIC ${ALLEGRO5_LIBRARY_DIRS})
endif(USE_ALLEGRO_IN_DIR)