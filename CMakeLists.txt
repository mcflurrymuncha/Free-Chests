cmake_minimum_required(VERSION 3.13)

# Force CMake to find the SDK folder provided by the GitHub Action
if(DEFINED ENV{GEODE_SDK})
    set(Geode_DIR "$ENV{GEODE_SDK}")
endif()

find_package(Geode REQUIRED)

project(FreeChests)

add_geode_mod(
    ${PROJECT_NAME}
    FILES src/main.cpp
)
