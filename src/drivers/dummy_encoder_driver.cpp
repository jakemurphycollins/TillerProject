/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "dummy_encoder_driver.hpp"

#include <cmath>
#include <cstdlib>

#include "tiller_params.hpp"

namespace tiller
{

DummyEncoderDriver::DummyEncoderDriver(uint16_t encoder_ticks_per_deg)
    : encoder_ticks_per_deg_(encoder_ticks_per_deg)
{
}

uint16_t DummyEncoderDriver::Read()
{
    bool encoder_slip{rand() % (params::kOddsOutOfToDropEncoderTicks) <
                      params::kOddsToDropEncoderTicks};
    if(encoder_slip)
    {
        this->angle_offset_deg_ += params::kSmallestAngleChange;
    }
    return static_cast<uint16_t>(
        std::floor(this->encoder_ticks_per_deg_ *
                   (this->current_angle_deg_ - this->angle_offset_deg_)));
}

void DummyEncoderDriver::SetAngle(float new_angle)
{
    this->current_angle_deg_ = new_angle;
}

}  // namespace tiller