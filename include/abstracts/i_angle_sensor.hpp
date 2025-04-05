#pragma once

#include "i_resettable.hpp"
#include <optional>

namespace tiller {

/**
 * @brief Interface describing a sensor that reads an angle
 *
 */
class IAngleSensor : public IResettable<float> {
public:
  /**
   * @brief Reads the angle from the peripheral and returns it
   *
   * @return float Returns an angle in units of degrees
   */
  [[nodiscard]] virtual std::optional<float> Read() = 0;
};

} // namespace tiller