cmake_minimum_required(VERSION 3.13)
project(OpenHardware)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp src/Hardware.cpp)
add_executable(oh_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(oh_run src)
