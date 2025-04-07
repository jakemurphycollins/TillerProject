/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "dummy_adc_driver.hpp"

#include <algorithm>
#include <cstdlib>
#include <iostream>

#include "tiller_params.hpp"

namespace tiller
{

DummyAdcDriver::DummyAdcDriver() : map_(params::kPotentiometerMappingParams) {}

float DummyAdcDriver::ReadVoltage()
{
    return this->map_.UnMap(this->current_angle_deg_);
}

void DummyAdcDriver::SetAngle(float new_angle)
{
    this->current_angle_deg_ = new_angle;
}

}  // namespace tiller