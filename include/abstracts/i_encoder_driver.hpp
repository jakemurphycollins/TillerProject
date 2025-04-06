/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <stdint.h>

namespace tiller
{

/**
 * @brief Interface for an incremental encoder driver
 *
 */
class IEncoderDriver
{
   public:
    /**
     * @brief Returns the current encoder count of the sensor
     *
     * @return uint16_t The encoder count from the peripheral
     */
    [[nodiscard]] virtual uint16_t Read() = 0;
};

}  // namespace tiller