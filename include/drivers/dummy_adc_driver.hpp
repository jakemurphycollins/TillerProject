/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include "i_adc_driver.hpp"
#include "linear_mapping.hpp"
#include "params/tiller_params.hpp"

namespace tiller
{

class DummyAdcDriver : public IAdcDriver
{
   public:
    DummyAdcDriver();
    ~DummyAdcDriver() = default;
    [[nodiscard]] float ReadVoltage() override;
    void SetAngle(float new_angle);

   private:
    float current_angle_deg_;
    utility::LinearMapping<float> map_;
};

}  // namespace tiller