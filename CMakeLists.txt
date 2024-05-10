cmake_minimum_required(VERSION 3.15)

project(SFML_GAME
    VERSION 0.1
    DESCRIPTION "A simple c++ game using SFML"
    LANGUAGES CXX)

find_package(SFML COMPONENTS graphics system window REQUIRED)

add_library(app STATIC src/app.cpp)

target_include_directories(app PUBLIC include)

set_target_properties(app PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)


add_executable(main src/main.cpp)
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
target_link_libraries(main app sfml-graphics sfml-window sfml-system)