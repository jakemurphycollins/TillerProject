/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once

#include <optional>

#include "i_resettable.hpp"

namespace tiller
{

/**
 * @brief Interface describing a sensor that reads an angle
 *
 */
class IAngleSensor : public IResettable<float>
{
   public:
    /**
     * @brief Reads the angle from the peripheral and returns it
     *
     * @return float Returns an angle in units of degrees
     */
    [[nodiscard]] virtual std::optional<float> Read() = 0;
};

}  // namespace tiller