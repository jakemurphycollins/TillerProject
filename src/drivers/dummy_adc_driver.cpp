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

DummyAdcDriver::DummyAdcDriver(Params params) : params_(params) {}

float DummyAdcDriver::ReadVoltage()
{
    this->last_voltage_ += this->increment_ ? this->params_.voltage_increment
                                            : -this->params_.voltage_increment;
    int odds_to_change_direction = rand() % 10001;
    if(this->last_voltage_ > this->params_.limits.second)
    {
        this->increment_ = false;
    }
    else if(this->last_voltage_ < this->params_.limits.first)
    {
        this->increment_ = true;
    }
    else if(odds_to_change_direction < 2)
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