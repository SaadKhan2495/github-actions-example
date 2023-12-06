cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(calc)
file(GLOB SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)