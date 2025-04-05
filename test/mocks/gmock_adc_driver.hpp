#pragma once

#include "i_adc_driver.hpp"
#include <gmock/gmock.h>

namespace tiller {

class MockAdcDriver : public IAdcDriver {
public:
  MOCK_METHOD(float, ReadVoltage, (), (override));
};

} // namespace tiller