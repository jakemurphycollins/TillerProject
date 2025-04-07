/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <gmock/gmock.h>

#include "i_encoder_driver.hpp"


namespace tiller
{

class MockEncoderDriver : public IEncoderDriver
{
   public:
    MOCK_METHOD(uint16_t, Read, (), (override));
};

}  // namespace tiller