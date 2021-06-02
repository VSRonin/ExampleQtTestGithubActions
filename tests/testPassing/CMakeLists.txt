cmake_minimum_required(VERSION 3.9)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Test REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Test REQUIRED)
add_executable(tst_Fail main.cpp tst_fail.h tst_fail.cpp)
target_link_libraries(tst_Fail PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Test)
set_target_properties(tst_Fail PROPERTIES
        AUTOMOC ON
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON
)
add_test(NAME tstFail WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/TestResults" COMMAND $<TARGET_FILE:tst_Fail> -o tstFail.xml,xml)