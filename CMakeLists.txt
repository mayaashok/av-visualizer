cmake_minimum_required(VERSION 3.16)

project(av_visualizer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

add_executable(av_visualizer
    src/main.cpp
)

target_link_libraries(av_visualizer PRIVATE Qt6::Widgets)