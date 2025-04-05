#pragma once

#include "abstracts/i_angle_sensor.hpp"
#include "i_encoder_driver.hpp"
#include <optional>

namespace tiller {

class EncoderSensor : public IAngleSensor {
public:
  struct Params {
    float degrees_per_encoder_tick{0};
  };

  EncoderSensor(Params params, IEncoderDriver &encoder_driver);
  ~EncoderSensor() = default;
  [[nodiscard]] std::optional<float> Read() override;

private:
  Params params_;
  IEncoderDriver *p_encoder_driver_;
  IAngleSensor *p_absolute_sensor_;
  uint16_t last_encoder_tick_;
  float current_angle_deg_;
};

} // namespace tiller