cmake_minimum_required(VERSION 3.14)

# set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set project name
project(rgb-color)

# get external library DocTest
include(FetchContent)  
FetchContent_Declare(doctest 
    GIT_REPOSITORY "https://github.com/onqtam/doctest"         
    GIT_TAG "b7c21ec5ceeadb4951b00396fc1e4642dd347e5f" )
	
FetchContent_MakeAvailable(doctest) 

# add executable target
add_executable(${CMAKE_PROJECT_NAME} main.cpp RGB_Color.cpp)

add_executable(${CMAKE_PROJECT_NAME}_test RGB_Color_test.cpp RGB_Color.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}_test PUBLIC ${doctest_SOURCE_DIR}/doctest)
target_link_libraries(${CMAKE_PROJECT_NAME}_test doctest)