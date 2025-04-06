/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include "dummy_encoder_driver.hpp"

#include <cstdlib>
#include <iostream>

#include "dummy_adc_driver.hpp"

namespace tiller
{

DummyEncoderDriver::DummyEncoderDriver(DummyAdcDriver &absolute_reference)
    : p_absolute_reference_(&absolute_reference)
{
}

uint16_t DummyEncoderDriver::Read()
{
    int odds_to_increment = rand() % 101;
    if(odds_to_increment < 20)
    {
        std::cout << "INFO:\tNot incrementing" << std::endl;
        return this->last_encoder_tick_;
    }
    this->last_encoder_tick_ += this->p_absolute_reference_->Incrementing()
                                    ? params_.increment
                                    : -params_.increment;
    return this->last_encoder_tick_;
}

}  // namespace tiller