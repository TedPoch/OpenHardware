include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicTests basicCheck.cpp)

target_link_libraries(runBasicTests gtest gtest_main)
target_link_libraries(runBasicTests src)