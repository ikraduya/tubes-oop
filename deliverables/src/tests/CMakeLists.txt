cmake_minimum_required(VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Map
add_executable(mapTests MapTests.cc)
target_link_libraries(mapTests ${GTEST_LIBRARIES} pthread)

# Farm
add_executable(farmTests FarmTests.cc)
target_link_libraries(farmTests ${GTEST_LIBRARIES} pthread)

# Inventory
add_executable(inventoryTests InventoryTests.cc)
target_link_libraries(inventoryTests ${GTEST_LIBRARIES} pthread)

# Player
add_executable(playerTests PlayerTests.cc)
target_link_libraries(playerTests ${GTEST_LIBRARIES} pthread)

# Display
add_executable(displayTests DisplayTests.cc)
target_link_libraries(displayTests ${GTEST_LIBRARIES} pthread)

# LinkedList
add_executable(linkedListTests common/LinkedListTests.cc)
target_link_libraries(linkedListTests ${GTEST_LIBRARIES} pthread)

# Animals
add_executable(animalTests animals/AnimalsTests.cc)
target_link_libraries(animalTests ${GTEST_LIBRARIES} pthread)

# Products
add_executable(productsTests products/ProductsTests.cc)
target_link_libraries(productsTests ${GTEST_LIBRARIES} pthread)

