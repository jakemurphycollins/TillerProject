/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "angle_sensor_task.hpp"

#include <iostream>

namespace tiller
{

AngleSensorTask::AngleSensorTask(IAngleSensor &angle_sensor)
    : p_angle_sensor_(&angle_sensor)
{
}

void AngleSensorTask::RunIfReady(uint64_t /*current_time_ms*/)
{
    auto current_angle = this->p_angle_sensor_->Read();
    if(current_angle.has_value())
    {
        std::cout << "Current Angle: " << current_angle.value() << " degrees"
                  << std::endl;
    }
}

}  // namespace tiller