#pragma once
#include "i_encoder_driver.hpp"
#include <gmock/gmock.h>

namespace tiller {

class MockEncoderDriver : public IEncoderDriver {
public:
  MOCK_METHOD(uint16_t, Read, (), (override));
};

} // namespace tiller