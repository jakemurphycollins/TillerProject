/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "dummy_adc_driver.hpp"

#include <algorithm>
#include <cstdlib>
#include <iostream>

namespace tiller
{

DummyAdcDriver::DummyAdcDriver(Params params) : params_(params)
{
    int initial_voltage = rand() % 5001;
    this->last_voltage_ = static_cast<float>(initial_voltage) / 1000.0F;
}

float DummyAdcDriver::ReadVoltage()
{
    this->last_voltage_ += this->increment_ ? this->params_.voltage_increment
                                            : -this->params_.voltage_increment;
    int odds_to_change_direction = rand() % (this->params_.odds_out_of + 1);
    if(this->last_voltage_ > this->params_.limits.second)
    {
        this->increment_ = false;
    }
    else if(this->last_voltage_ < this->params_.limits.first)
    {
        this->increment_ = true;
    }
    else if(odds_to_change_direction < this->params_.odds_to_change_direction)
    {
        std::cout << std::endl
                  << "INFO:\tSwitching Directions" << std::endl
                  << std::endl;
        this->increment_ = !this->increment_;
    }
    this->last_voltage_ =
        std::clamp<float>(this->last_voltage_, this->params_.limits.first,
                          this->params_.limits.second);
    return this->last_voltage_;
}

bool DummyAdcDriver::Incrementing() { return this->increment_; }

}  // namespace tiller