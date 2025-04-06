/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include <time.h>

#include <cstdlib>

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
int main()
{
    // Reseed random
    srand(time(NULL));
    DummyAdcDriver adc_driver{params::kADCParams};
    DummyEncoderDriver encoder_driver{params::kEncoderDriverParams, adc_driver};
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
        scheduler.Dispatch();
    }
    return 0;
}