/*
 *   Copyright (c) 2025 
 *   All rights reserved.
 */
#pragma once

#include "abstracts/i_angle_sensor.hpp"
#include "i_encoder_driver.hpp"
#include <optional>

namespace tiller {

/**
 * @brief Implementation of an incremental encoder sensor
 *
 */
class EncoderSensor : public IAngleSensor {
public:
  /**
   * @brief The parameters required by the encoder peripheral
   *
   */
  struct Params {
    float degrees_per_encoder_tick{0};
  };

  /**
   * @brief Construct a new Encoder Sensor object
   *
   * @param params Parameters for the class
   * @param encoder_driver Reference to the encoder driver
   */
  EncoderSensor(Params params, IEncoderDriver &encoder_driver);

  /**
   * @brief Destroy the Encoder Sensor object
   *
   */
  ~EncoderSensor() = default;

  /**
   * @brief Reads the current angle reported from the encoder sensor
   *
   * @return std::optional<float> An optional float value representing the angle
   * in degrees
   */
  [[nodiscard]] std::optional<float> Read() override;

  /**
   * @brief Resets the encoder sensor to the given angle
   *
   * @param init_state The angle to reset the sensor to
   */
  void Reset(float init_state) override;

private:
  Params params_;                    ///< Parameters for the class
  IEncoderDriver *p_encoder_driver_; ///< Pointer to the encoder driver
  uint16_t last_encoder_tick_;       ///< Last encoder tick reported
  float current_angle_deg_;          ///< Current angle of the sensor
};

} // namespace tiller