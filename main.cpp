/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include <time.h>

#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <thread>

#include "angle_sensor_task.hpp"
#include "combination_sensor.hpp"
#include "dummy_adc_driver.hpp"
#include "dummy_encoder_driver.hpp"
#include "encoder_sensor.hpp"
#include "include/params/tiller_params.hpp"
#include "include/tta/angle_sensor_task.hpp"
#include "potentiometer_sensor.hpp"
#include "scheduler.hpp"
#include "tiller_params.hpp"
#include "tta/scheduler.hpp"

using namespace tiller;

std::mutex mutex;
std::chrono::milliseconds duration_100ms(100);

static void SensorThread(DummyAdcDriver &adc_driver,
                         DummyEncoderDriver &encoder_driver)

{
    // Reseed random
    srand(time(NULL));
    PotentiometerSensor potentiometer_sensor{adc_driver};
    EncoderSensor relative_encoder_sensor{params::kTillerEncoderParams,
                                          encoder_driver};
    CombinationSensor tiller_angle_sensor{params::kTillerAngleSensorParams,
                                          relative_encoder_sensor,
                                          potentiometer_sensor};
    AngleSensorTask angle_sensor_task{tiller_angle_sensor};
    Scheduler scheduler{params::kTickPeriodMs};
    scheduler.AddTask(angle_sensor_task);
    scheduler.Start();

    while(true)
    {
        if(mutex.try_lock())
        {
            scheduler.Dispatch();
            mutex.unlock();
        }
    }
}

static void SimulatedDataThread(DummyAdcDriver &adc_driver,
                                DummyEncoderDriver &encoder_driver)
{
    // Reseed random
    srand(time(NULL));
    float current_angle = static_cast<float>(rand() % 181) - 90.0F;
    bool incrementing{true};
    while(true)
    {
        mutex.lock();
        float angle_increment =
            std::max(static_cast<float>(rand() % 101) / 100.0F, 0.1F);
        current_angle += incrementing ? angle_increment : -angle_increment;
        bool change_direction =
            (rand() % (params::kOddsOutOfToChangeDirection) <
                     params::kOddsToChangeDirection
                 ? true
                 : false);
        if(current_angle > params::kTillerAngleLimits.second)
        {
            incrementing = false;
        }
        else if(current_angle < params::kTillerAngleLimits.first)
        {
            incrementing = true;
        }
        else if(change_direction)
        {
            incrementing = !incrementing;
        }
        current_angle =
            std::clamp(current_angle, params::kTillerAngleLimits.first,
                       params::kTillerAngleLimits.second);
        encoder_driver.SetAngle(current_angle);
        adc_driver.SetAngle(current_angle);
        mutex.unlock();
        std::this_thread::sleep_for(duration_100ms);
    }
}

int main()
{
    DummyAdcDriver adc_driver{};
    DummyEncoderDriver encoder_driver{params::kEncoderTicksPerDegree};
    std::thread thread_data_sim(SimulatedDataThread, std::ref(adc_driver),
                                std::ref(encoder_driver));
    std::thread thread_sensor(SensorThread, std::ref(adc_driver),
                              std::ref(encoder_driver));
    thread_sensor.join();
    return 0;
}