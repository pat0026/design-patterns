cmake_minimum_required(VERSION 3.5.0)
project(DesignPatterns VERSION 0.1.0 LANGUAGES C CXX)

# Configurations...
set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

add_subdirectory(src)

