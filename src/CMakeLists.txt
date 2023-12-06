cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

#Exception Handling
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/basic-repo)

project(example-1)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/Example_1.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

project(example-2)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/Example_2.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})