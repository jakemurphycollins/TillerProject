/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once

namespace tiller
{

/**
 * @brief Interface for an ADC driver
 *
 */
class IAdcDriver
{
   public:
    /**
     * @brief Reads the voltage from ADC
     * @details The voltage is read from ADC.
     *
     * @return float
     */
    [[nodiscard]] virtual float ReadVoltage() = 0;
};

}  // namespace tiller