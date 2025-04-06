#pragma once

#include "i_angle_sensor.hpp"
namespace tiller {

/**
 * @brief Combines a primary sensor with its given reference sensor
 * @details When the primary sensor drifts too far away from the reference, the
 * primary sensor is reset to the reference value
 *
 */
class CombinationSensor : public IAngleSensor {
public:
  /**
   * @brief Object specific parameters for the class
   *
   */
  struct Params {
    float max_drift_deg{0}; ///< Absolute maximum drift the primary sensor can
                            ///< have before needing to be reset
  };

  /**
   * @brief Construct a new Combination Sensor object
   *
   * @param primary_sensor Reference to the primary sensor
   * @param reference_sensor Reference to the reference sensor
   */
  CombinationSensor(Params params, IAngleSensor &primary_sensor,
                    IAngleSensor &reference_sensor);

  /**
   * @brief Destroy the Combination Sensor object
   *
   */
  ~CombinationSensor() = default;

  /**
   * @brief Reads the angle of the sensor and recalibrates the primary sensor if
   * needed
   *
   * @return std::optional<float> The current angle reported by the combination
   * of the sensors
   */
  [[nodiscard]] std::optional<float> Read() override;

  /**
   * @brief Resets the internal state of the sensor
   * @details The sensor has no internal state, so function does nothing
   *
   * @param init_state Initial angle, but not used
   */
  void Reset(float init_state) override;

private:
  Params params_; ///< Object specific parameters
  IAngleSensor
      *p_primary_sensor_; ///< Pointer to the primary sensor used by the device
  IAngleSensor *p_reference_sensor_; ///< Pointer to the reference sensor used
                                     ///< to calibrate the primary sensor
};

} // namespace tiller
