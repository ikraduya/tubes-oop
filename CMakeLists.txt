cmake_minimum_required(VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Map
add_executable(mapTests mapGoogleTest.cc)
target_link_libraries(mapTests ${GTEST_LIBRARIES} pthread)

# Farm
add_executable(farmTests FarmTests.cc)
target_link_libraries(farmTests ${GTEST_LIBRARIES} pthread)

# Inventory
add_executable(invTests invTests.cc)
target_link_libraries(invTests ${GTEST_LIBRARIES} pthread)

# Player
add_executable(playerTest playerTests.cc)
target_link_libraries(playerTest ${GTEST_LIBRARIES} pthread)

# Display

# LinkedList
add_executable(linkedListTest common/LinkedListTest.cc)
target_link_libraries(linkedListTest ${GTEST_LIBRARIES} pthread)

# DisplayTests
add_executable(dispTests DisplayTests.cc)
target_link_libraries(dispTests ${GTEST_LIBRARIES} pthread)

