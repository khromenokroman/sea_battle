cmake_minimum_required(VERSION 3.5)

project(sea_battle)

add_executable(sea_battle 
    menu.cpp
    draw.cpp
    sea_battle.cpp
    ship.cpp
    work_filesystem.cpp
)
set_target_properties(sea_battle PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)