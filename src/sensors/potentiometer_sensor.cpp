#include "potentiometer_sensor.hpp"
#include <cmath>
#include <cstddef>

namespace tiller {

PotentiometerSensor::PotentiometerSensor(IAdcDriver &adc) : p_adc_(&adc) {}

std::optional<float> PotentiometerSensor::Read() {
  float voltage = p_adc_->ReadVoltage();
  if (std::fpclassify(voltage) == FP_NORMAL ||
      std::fpclassify(voltage) == FP_ZERO) {
    return this->map_.Map(voltage);
  }
  return std::nullopt;
}

} // namespace tiller