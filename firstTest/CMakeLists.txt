cmake_minimum_required(VERSION 3.27)

project(firstTest VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17) 
# Locate GTest
# Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests main.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES})
install(TARGETS runTests RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin)
