cmake_minimum_required(VERSION 3.10.0)
project(lab5 VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE_FILES main.cpp src/arythm.cpp src/mod_arythm.cpp src/try_example.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
