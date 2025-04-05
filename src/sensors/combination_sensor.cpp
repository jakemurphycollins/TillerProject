#include "combination_sensor.hpp"
#include "i_angle_sensor.hpp"

namespace tiller {

CombinationSensor::CombinationSensor(IAngleSensor &primary_sensor,
                                     IAngleSensor &reference_sensor)
    : p_primary_sensor_(&primary_sensor),
      p_reference_sensor_(&reference_sensor) {}

std::optional<float> CombinationSensor::Read() { return std::nullopt; }

void Reset(float /*init_state*/) {
  // Do Nothing
}

} // namespace tiller