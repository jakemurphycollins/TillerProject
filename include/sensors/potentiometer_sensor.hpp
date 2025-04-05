#pragma once

#include "abstracts/i_adc_driver.hpp"
#include "abstracts/i_angle_sensor.hpp"
#include "params/tiller_params.hpp"
#include "utilities/linear_mapping.hpp"

namespace tiller {

class PotentiometerSensor : public IAngleSensor {
public:
  PotentiometerSensor(IAdcDriver &adc);
  ~PotentiometerSensor() = default;
  [[nodiscard]] std::optional<float> Read() override;

private:
  IAdcDriver *p_adc_;
  utility::LinearMapping<float> map_{params::kPotentiometerMappingParams};
};

} // namespace tiller