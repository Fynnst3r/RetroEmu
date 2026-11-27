cmake_minimum_required(VERSION 3.22)
project(RetroEmu)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(RetroEmu)

target_sources(RetroEmu
  PRIVATE
    main.cpp
)

target_sources(RetroEmu
  PRIVATE
    srcs
)

include_directories(inc)


find_library(SDL2, PRIVATE 2.7)

link_libraries(SDL2::SDL2)
