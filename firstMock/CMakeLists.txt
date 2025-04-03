cmake_minimum_required(VERSION 3.27)
 cd
# Locate GTest
# Test
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

set(CMAKE_SYSTEM_NAME Linux)

include_directories(${GTEST_INCLUDE_DIRS})
message(STATUS "MY_VARIABLE = ${GTEST_INCLUDE_DIRS}")
set(CMAKE_EXECUTABLE_SUFFIX "")

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests main.cpp UserService.h MockDatabase.h Database.h)
target_link_libraries(runTests ${GTEST_LIBRARIES}
GTest::gmock 
GTest::gmock_main 
Threads::Threads)

#Register the tests so that it can be run with ctest
add_test(NAME runTests COMMAND runTests.exe)
