cmake_minimum_required(VERSION 3.15)

project(SFML_GAME
    VERSION 0.1
    DESCRIPTION "A simple c++ game using SFML"
    LANGUAGES CXX)

# Try finding SFML package locally
find_package(SFML COMPONENTS graphics system window REQUIRED)

# Add the app libraby (STATIC)
add_library(app STATIC src/app.cpp)
target_include_directories(app PUBLIC include)
# Set the output dir
set_target_properties(app PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# Add an executable
add_executable(main src/main.cpp)
# Set the output dir of our executable
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Link all required libraries to main executable
target_link_libraries(main app sfml-graphics sfml-window sfml-system)