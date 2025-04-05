#include "sensors/encoder_sensor.hpp"
#include "i_angle_sensor.hpp"
#include <cmath>
#include <cstdint>

namespace tiller {

EncoderSensor::EncoderSensor(Params params, IEncoderDriver &encoder_driver)
    : params_(params), p_encoder_driver_(&encoder_driver) {
  this->last_encoder_tick_ = this->p_encoder_driver_->Read();
}

std::optional<float> EncoderSensor::Read() {
  uint16_t current_encoder_tick = this->p_encoder_driver_->Read();
  int16_t encoder_difference = current_encoder_tick - this->last_encoder_tick_;
  this->last_encoder_tick_ = current_encoder_tick;
  this->current_angle_deg_ += static_cast<float>(encoder_difference) *
                              this->params_.degrees_per_encoder_tick;
  return this->current_angle_deg_;
}

void EncoderSensor::Reset(float init_state) {
  this->current_angle_deg_ = init_state;
}

} // namespace tiller