/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <cstdint>

#include "i_encoder_driver.hpp"

namespace tiller
{

/**
 * @brief Dummy Encoder Driver. The sensor task reads the angle from the sensor
 * while the other task updates the current angle
 *
 */
class DummyEncoderDriver : public IEncoderDriver
{
   public:
    /**
     * @brief Construct a new Dummy Encoder Driver object
     *
     * @param encoder_ticks_per_deg
     */
    DummyEncoderDriver(uint16_t encoder_ticks_per_deg);
    /**
     * @brief Destroy the Dummy Encoder Driver object
     *
     */
    ~DummyEncoderDriver() = default;
    /**
     * @brief Converts the current angle and slip to an encoder tick
     * @details Randomly the function increases the angle offset
     *
     * @return uint16_t
     */
    [[nodiscard]] uint16_t Read() override;
    /**
     * @brief Set the Angle object
     *
     * @param new_angle
     */
    void SetAngle(float new_angle);

   private:
    /**
     * @brief Conversion factor between degrees and encoder ticks
     *
     */
    uint16_t encoder_ticks_per_deg_;
    /**
     * @brief Current sensor angle without the "slip"
     *
     */
    float current_angle_deg_{0};
    /**
     * @brief The accumulated amount of "slip" in degrees
     *
     */
    float angle_offset_deg_{0};
};

}  // namespace tiller