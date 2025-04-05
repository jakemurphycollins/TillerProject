#include "sensors/encoder_sensor.hpp"
#include "i_angle_sensor.hpp"
#include <cmath>
#include <cstdint>


namespace tiller {

EncoderSensor::EncoderSensor(Params params, IEncoderDriver &encoder_driver,
                             IAngleSensor &absolute_sensor)
    : params_(params), p_encoder_driver_(&encoder_driver),
      p_absolute_sensor_(&absolute_sensor) {
  this->last_encoder_tick_ = this->p_encoder_driver_->Read();
  this->reference_angle_deg_ = this->p_absolute_sensor_->Read();
  this->current_angle_deg_ = this->reference_angle_deg_.has_value()
                                 ? this->reference_angle_deg_.value()
                                 : 0.0F;
}

std::optional<float> EncoderSensor::Read() {
  uint16_t current_encoder_tick = this->p_encoder_driver_->Read();
  int16_t encoder_difference = current_encoder_tick - this->last_encoder_tick_;
  this->last_encoder_tick_ = current_encoder_tick;
  this->current_angle_deg_ += static_cast<float>(encoder_difference) *
                              this->params_.degrees_per_encoder_tick;
  return this->current_angle_deg_;
}

void EncoderSensor::RefreshCurrentAngle() {
  this->reference_angle_deg_ = this->p_absolute_sensor_->Read();
  if (this->reference_angle_deg_.has_value()) {
    if (this->params_.max_difference_to_reference <
        abs(this->reference_angle_deg_.value() - this->current_angle_deg_)) {
      this->current_angle_deg_ = this->reference_angle_deg_.value();
    }
  }
}

} // namespace tiller