#pragma once
#include <stdint.h>

namespace tiller {
class IEncoderDriver {
public:
  [[nodiscard]] virtual uint16_t Read() = 0;
};
} // namespace tiller