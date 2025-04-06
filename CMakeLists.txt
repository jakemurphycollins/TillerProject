cmake_minimum_required(VERSION 3.15)

project(TillerProject)
option(TEST_BUILD, "Build for testing" FALSE)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Generate compile commands database
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/6910c9d9165801d8827d628cb72eb7ea9dd538c5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(
    _Tiller
    src/sensors/potentiometer_sensor.cpp
    src/sensors/combination_sensor.cpp
    src/sensors/encoder_sensor.cpp
    src/tta/scheduler.cpp
    src/tta/angle_sensor_task.cpp
    src/drivers/dummy_adc_driver.cpp
    src/drivers/dummy_encoder_driver.cpp
)

target_include_directories(
    _Tiller PUBLIC
    include/
    include/abstracts/
    include/sensors/
    include/utilities/
    include/params/
    include/tta/
    include/drivers
)
add_library(Tiller ALIAS _Tiller)

if(${TEST_BUILD}) 
    add_subdirectory(test)  
else()
    add_executable(
        simulation
        main.cpp
    )
    target_link_libraries(
        simulation
        Tiller
    )
endif()

