#pragma once

#include "abstracts/i_adc_driver.hpp"
#include "abstracts/i_angle_sensor.hpp"
#include "params/tiller_params.hpp"
#include "utilities/linear_mapping.hpp"

namespace tiller {

/**
 * @brief Implementation of an absolute potentiometer angle sensor
 *
 */
class PotentiometerSensor : public IAngleSensor {
public:
  /**
   * @brief Construct a new Potentiometer Sensor object
   *
   * @param adc Reference to the ADC used by the sensor
   */
  PotentiometerSensor(IAdcDriver &adc);

  /**
   * @brief Destroy the Potentiometer Sensor object
   *
   */
  ~PotentiometerSensor() = default;

  /**
   * @brief Reads the value of the sensor and returns it, if it is valid
   *
   * @return std::optional<float> Degrees if its a valid angle, otherwise
   * nullopt
   */
  [[nodiscard]] std::optional<float> Read() override;

  /**
   * @brief Resets the state of the sensor
   * @details The sensor has no internal state so this does nothing
   *
   * @param init_state Initial angle, but not used
   */
  void Reset(float init_state) override;

private:
  IAdcDriver *p_adc_; ///< Pointer to the adc driver
  utility::LinearMapping<float> map_{
      params::kPotentiometerMappingParams}; ///< Linear map used by the class to
                                            ///< convert voltage to degrees
};

} // namespace tiller