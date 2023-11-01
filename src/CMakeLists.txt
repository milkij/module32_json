cmake_minimum_required(VERSION 3.21)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_executable(module32_json main.cpp task1.cpp task2.cpp)
target_include_directories(module32_json PUBLIC ${MY_INCLUDE_DIR})
#target_link_libraries(module32_json PRIVATE nlohmann_json::nlohmann_json)