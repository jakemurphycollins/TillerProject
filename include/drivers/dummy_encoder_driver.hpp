/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <cstdint>

#include "dummy_adc_driver.hpp"
#include "i_encoder_driver.hpp"

namespace tiller
{

class DummyEncoderDriver : public IEncoderDriver
{
   public:
    DummyEncoderDriver(uint16_t encoder_ticks_per_deg);
    ~DummyEncoderDriver() = default;
    [[nodiscard]] uint16_t Read() override;
    void SetAngle(float new_angle);

   private:
    uint16_t encoder_ticks_per_deg_;
    float current_angle_deg_{0};
    float angle_offset_deg_{0};
};

}  // namespace tiller