/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include "i_encoder_driver.hpp"

namespace tiller
{

class DummyEncoderDriver : public IEncoderDriver
{
   public:
    DummyEncoderDriver() = default;
    ~DummyEncoderDriver() = default;
    [[nodiscard]] uint16_t Read() override;
};

}  // namespace tiller