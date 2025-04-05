#include "combination_sensor.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace tiller {

class CombinationSensorTest : public testing::Test {
protected:
  void SetUp() override {}
};

TEST_F(CombinationSensorTest, expect_fail) { FAIL(); }

} // namespace tiller