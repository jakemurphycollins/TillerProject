cmake_minimum_required(VERSION 3.15)

project(TillerProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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
    main.cpp
)

target_include_directories(
    _Tiller PUBLIC 
    include/
    include/abstracts/
    include/drivers/
    include/sensors/
)
add_library(Tiller ALIAS _Tiller)

add_subdirectory(test)