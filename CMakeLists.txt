cmake_minimum_required(VERSION 2.8.11)

set(PROJECT_NAME ShipIt)

project(${PROJECT_NAME})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

file(GLOB Sources "*.cpp")

if (WIN32)
    set(GUI_TYPE WIN32)
elseif (APPLE)
    set(GUI_TYPE MACOSX_BUNDLE)
    set(MACOSX_BUNDLE_BUNDLE_NAME ${PROJECT_NAME})
    set(MACOSX_BUNDLE_GUI_IDENTIFIER "${PROJECT_NAME}")
    set(MACOSX_BUNDLE_ICON_FILE ${PROJECT_NAME}.icns)
endif ()

if (GUI_TYPE)
    add_executable(${PROJECT_NAME} ${GUI_TYPE} ${Sources})
else ()
    add_executable(${PROJECT_NAME} ${Sources})
endif ()

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
