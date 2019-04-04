cmake_minimum_required(VERSION 2.6)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(mapTests mapGoogleTest.cpp)
target_link_libraries(mapTests ${GTEST_LIBRARIES} pthread)
add_executable(farmTests farmGTest.cpp)
target_link_libraries(farmTests ${GTEST_LIBRARIES} pthread)

