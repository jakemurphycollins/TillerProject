/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once

#include <gmock/gmock.h>

#include "i_adc_driver.hpp"


namespace tiller
{

class MockAdcDriver : public IAdcDriver
{
   public:
    MOCK_METHOD(float, ReadVoltage, (), (override));
};

}  // namespace tiller