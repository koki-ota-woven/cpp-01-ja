cmake_minimum_required(VERSION 3.27)
project(Challenge)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
  execute_process(COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/rename.bat")
else()
  execute_process(COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/rename")
endif()

enable_testing()

file(GLOB MAIN_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../*.cpp")
file(GLOB TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../tests/*.cpp")
file(GLOB DUMMY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/gen/dummy_main.cpp")

list(APPEND ALL_SOURCES ${MAIN_SOURCES} ${TEST_SOURCES} ${DUMMY_SOURCES})

list(REMOVE_ITEM ALL_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../main.cpp")

add_executable(Tests ${ALL_SOURCES})
target_include_directories(Tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_link_libraries(Tests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(Tests)