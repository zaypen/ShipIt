cmake_minimum_required(VERSION 2.8.11)

set(PROJECT_NAME ShipIt)

project(${PROJECT_NAME})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

file(GLOB Sources "*.cpp")

if (APPLE)
    set(MACOSX_BUNDLE_BUNDLE_NAME ${PROJECT_NAME})
    set(MACOSX_BUNDLE_GUI_IDENTIFIER "${PROJECT_NAME}")
    set(MACOSX_BUNDLE_ICON_FILE ${PROJECT_NAME}.icns)
    add_executable(${PROJECT_NAME} MACOSX_BUNDLE ${Sources})
else ()
    add_executable(${PROJECT_NAME} ${Sources})
endif ()
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
