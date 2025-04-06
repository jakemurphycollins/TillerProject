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
    struct Params
    {
        uint16_t increment{10};
    };
    DummyEncoderDriver(DummyAdcDriver &absolute_reference);
    ~DummyEncoderDriver() = default;
    [[nodiscard]] uint16_t Read() override;

   private:
    Params params_{};
    DummyAdcDriver *p_absolute_reference_;
    uint16_t last_encoder_tick_{0};
};

}  // namespace tiller