cmake_minimum_required(VERSION 3.13)

# This tells CMake where to find the Geode logic if the environment is fresh
if(NOT GEODE_LOADED)
    find_package(Geode REQUIRED)
endif()

project(FreeChests)

add_geode_mod(
    ${PROJECT_NAME}
    FILES src/main.cpp
)
