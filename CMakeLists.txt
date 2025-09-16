cmake_minimum_required(VERSION 3.10)
project(lab_01)

set(CMAKE_CXX_STANDART 20)
set(CMAKE_CXX_STANDART_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.0
    TLS_VERIFY false
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_library(${CMAKE_PROJECT_NAME}_lib src/function.cpp)
add_executable(${CMAKE_PROJECT_NAME}_out main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}_out PRIVATE ${CMAKE_PROJECT_NAME}_lib) 

enable_testing()

add_executable(tests tests/test_01.cpp)
target_link_libraries(tests ${CMAKE_PROJECT_NAME}_lib gtest_main)

add_test(NAME MyProjectTests COMMAND tests)