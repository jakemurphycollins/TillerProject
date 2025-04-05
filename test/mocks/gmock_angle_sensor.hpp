#pragma once
#include "i_angle_sensor.hpp"
#include <gmock/gmock.h>

namespace tiller {

class MockAngleSensor : public IAngleSensor {
public:
  MOCK_METHOD(std::optional<float>, Read, (), (override));
};

} // namespace tiller