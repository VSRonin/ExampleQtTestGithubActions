cmake_minimum_required(VERSION 3.9)
project(ExampleQtTestGithubActions LANGUAGES CXX)
include(CTest)
enable_testing()
file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/TestResults")
add_subdirectory(tests)

