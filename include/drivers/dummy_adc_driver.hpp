/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once

#include <utility>

#include "i_adc_driver.hpp"

namespace tiller
{

class DummyAdcDriver : public IAdcDriver
{
   public:
    struct Params
    {
        float voltage_increment{0};
        std::pair<float, float> limits{0, 0};
    };
    DummyAdcDriver(Params params);
    ~DummyAdcDriver() = default;
    [[nodiscard]] float ReadVoltage() override;
    bool Incrementing();

   private:
    Params params_;
    float last_voltage_{0.0F};
    bool increment_{true};
};

}  // namespace tiller