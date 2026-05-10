cmake_minimum_required(VERSION 3.13)

set(CMAKE_PREFIX_PATH $ENV{GEODE_SDK})

find_package(Geode REQUIRED)

project(FreeChests)

add_geode_mod(
    ${PROJECT_NAME}
    FILES src/main.cpp
)
