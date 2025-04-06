/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once

#include "i_adc_driver.hpp"

namespace tiller
{

class DummyAdcDriver : public IAdcDriver
{
   public:
    DummyAdcDriver() = default;
    ~DummyAdcDriver() = default;
    [[nodiscard]] float ReadVoltage() override;
};

}  // namespace tiller