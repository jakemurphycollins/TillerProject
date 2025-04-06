/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "combination_sensor.hpp"

#include <cmath>
#include <optional>

#include "i_angle_sensor.hpp"

namespace tiller
{

CombinationSensor::CombinationSensor(Params params,
                                     IAngleSensor &primary_sensor,
                                     IAngleSensor &reference_sensor)
    : params_(params),
      p_primary_sensor_(&primary_sensor),
      p_reference_sensor_(&reference_sensor)
{
    std::optional<float> reference_angle = this->p_reference_sensor_->Read();
    float initial_angle =
        reference_angle.has_value() ? reference_angle.value() : 0.0F;
    this->p_primary_sensor_->Reset(initial_angle);
}

std::optional<float> CombinationSensor::Read()
{
    auto reference_angle = this->p_reference_sensor_->Read();
    auto primary_angle = this->p_primary_sensor_->Read();
    if(!reference_angle.has_value() && !primary_angle.has_value())
    {
        return std::nullopt;
    }
    else if(!primary_angle.has_value())
    {
        return reference_angle;
    }
    else if(!reference_angle.has_value())
    {
        return primary_angle;
    }
    else
    {
        float angle_difference =
            fabs(primary_angle.value() - reference_angle.value());
        if(angle_difference > this->params_.max_drift_deg)
        {
            this->p_primary_sensor_->Reset(reference_angle.value());
            return reference_angle;
        }
        return primary_angle;
    }
    return this->p_primary_sensor_->Read();
}

void CombinationSensor::Reset(float /*init_state*/)
{
    this->p_reference_sensor_->Reset(0);
    auto reference_angle = this->p_reference_sensor_->Read();
    float initial_angle =
        reference_angle.has_value() ? reference_angle.value() : 0.0F;
    this->p_primary_sensor_->Reset(initial_angle);
}

}  // namespace tiller
