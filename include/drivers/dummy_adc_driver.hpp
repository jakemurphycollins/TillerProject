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

/**
 * @brief Dummy ADC Driver. The sensor task reads the voltage at a regular rate,
 * while the other task updates the tiller angle as needed
 *
 */
class DummyAdcDriver : public IAdcDriver
{
   public:
    /**
     * @brief Construct a new Dummy Adc Driver object
     *
     */
    DummyAdcDriver();
    /**
     * @brief Destroy the Dummy Adc Driver object
     *
     */
    ~DummyAdcDriver() = default;
    /**
     * @brief Converts current angle to a voltage and returns it
     *
     * @return float Voltage representation of the current angle
     */
    [[nodiscard]] float ReadVoltage() override;
    /**
     * @brief Set the Angle object
     *
     * @param new_angle
     */
    void SetAngle(float new_angle);

   private:
    float current_angle_deg_;  ///< Current angle that the ADC driver should
                               ///< report
    utility::LinearMapping<float>
        map_;  ///< Mapping for translating the tiller angle to voltage
};

}  // namespace tiller