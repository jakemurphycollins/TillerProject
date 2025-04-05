#pragma once

#include <gmock/gmock.h>
#include "i_adc_driver.hpp"

namespace tiller {

class MockAdcDriver : IAdcDriver {
    public:
        MOCK_METHOD(float, ReadVoltage, (), (override));
};

}