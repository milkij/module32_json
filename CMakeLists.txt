cmake_minimum_required(VERSION 3.23)
project(module32_json)

set(CMAKE_CXX_STANDARD 23)



set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(module32_json main.cpp)

#add_library(module32)

target_link_libraries(module32_json PRIVATE nlohmann_json::nlohmann_json)