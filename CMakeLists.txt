cmake_minimum_required(VERSION 3.13)

# This line is crucial for the build server to find Geode
if(NOT GEODE_LOADED)
    find_package(Geode REQUIRED)
endif()

project(FreeChests)

add_geode_mod(
    ${PROJECT_NAME}
    FILES src/main.cpp
)
