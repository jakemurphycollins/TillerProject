add_library(
    code_to_test
    ../src/sensors/potentiometer_sensor.cpp
    ../src/sensors/encoder_sensor.cpp
    ../src/sensors/combination_sensor.cpp
    ../src/tta/scheduler.cpp
    ../src/tta/angle_sensor_task.cpp
)

target_include_directories(
    code_to_test PUBLIC
    mocks
    ../include
    ../include/abstracts
    ../include/sensors
    ../include/utilities
    ../include/params
    ../include/tta
)

add_executable(
    tests
    sensors/gtest_potentiometer_sensor.cpp
    sensors/gtest_encoder_sensor.cpp
    sensors/gtest_combination_sensor.cpp
    tta/gtest_scheduler.cpp
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