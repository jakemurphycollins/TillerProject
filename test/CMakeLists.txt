add_library(
    code_to_test
    ../src/sensors/potentiometer_sensor.cpp
    ../src/sensors/encoder_sensor.cpp
)

target_include_directories(
    code_to_test PUBLIC
    mocks
    ../include
    ../include/abstracts
    ../include/sensors
    ../include/utilities
    ../include/params
)

add_executable(
    tests
    sensors/gtest_potentiometer_sensor.cpp
    sensors/gtest_encoder_sensor.cpp
)

target_include_directories(
    tests PUBLIC
    mocks
)
target_link_libraries(
    tests
    code_to_test
    GTest::gtest_main
    GTest::gmock_main
)

enable_testing()
include(GoogleTest)
gtest_discover_tests(tests)