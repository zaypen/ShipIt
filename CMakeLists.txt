cmake_minimum_required(VERSION 2.8.11)

project(ShipIt)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

file(GLOB Sources "*.cpp")
add_executable(ShipIt ${Sources})

target_link_libraries(ShipIt Qt5::Widgets)
