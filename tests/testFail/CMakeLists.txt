cmake_minimum_required(VERSION 3.9)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Test REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Test REQUIRED)
add_executable(tst_Passing main.cpp tst_passing.h tst_passing.cpp)
target_link_libraries(tst_Passing PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Test)
set_target_properties(tst_Passing PROPERTIES
        AUTOMOC ON
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON
)
add_test(NAME tstPassing WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/TestResults" COMMAND $<TARGET_FILE:tst_Passing> -o tstPassing.xml,xml)