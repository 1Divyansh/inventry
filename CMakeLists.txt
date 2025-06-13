cmake_minimum_required(VERSION 3.5)
project(QtWhiteApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(QtWhiteApp src/main.cpp)

target_link_libraries(QtWhiteApp Qt5::Widgets)
