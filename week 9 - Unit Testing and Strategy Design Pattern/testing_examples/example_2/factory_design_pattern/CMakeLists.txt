cmake_minimum_required(VERSION 3.1)

# Locate GTest 
find_package(GTest REQUIRED) 
include_directories(${GTEST_INCLUDE_DIRS})

## Add GTest required libraries to linker
link_libraries(${GTEST_LIBRARIES} gtest_main pthread)

## Set c++ 11 std
set(CMAKE_CXX_STANDARD 11)

## Include our source directories
set(CMAKE_INCLUDE_CURRENT_DIR True)

## Set gcov flags
set(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "-lgcov")

set(SIMPLE "runSimpleTests")
add_executable(${SIMPLE} "code/src/CoinFactory.cpp" "test/src/CoinFactoryTest.cpp" "code/src/SilverCoin.cpp" "code/src/GoldCoin.cpp" "code/src/UndefinedCoinType.cpp")

# Link runTests with what we want to test and the GTest and pthread library 
# add_executable(runTests run_tests.cpp) 
# target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)