/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <gmock/gmock.h>

#include "i_angle_sensor.hpp"


namespace tiller
{

class MockAngleSensor : public IAngleSensor
{
   public:
    MOCK_METHOD(std::optional<float>, Read, (), (override));
    MOCK_METHOD(void, Reset, (float), (override));
};

}  // namespace tiller