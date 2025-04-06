#include "combination_sensor.hpp"
#include "gmock_angle_sensor.hpp"
#include "tiller_params.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace tiller {

using testing::Return;

class CombinationSensorTest : public testing::Test {
protected:
  void SetUp() override {
    EXPECT_CALL(mock_reference_sensor, Read()).WillRepeatedly(Return(0.0F));
  }
  MockAngleSensor mock_primary_sensor;
  MockAngleSensor mock_reference_sensor;
};

TEST_F(CombinationSensorTest,
       when_initialized_expect_angleSetToReferenceValue) {
  static constexpr float kInitialAngleDeg{85.67F};
  EXPECT_CALL(mock_reference_sensor, Read()).WillOnce(Return(kInitialAngleDeg));
  EXPECT_CALL(mock_primary_sensor, Reset(kInitialAngleDeg));
  CombinationSensor combination_sensor{params::kTillerAngleSensorParams,
                                       mock_primary_sensor,
                                       mock_reference_sensor};
}

TEST_F(CombinationSensorTest,
       when_primaryAngleMatchesReference_expect_thatAngleReturned) {
  static constexpr float kExpectedAngle{12.34F};
  CombinationSensor combination_sensor{params::kTillerAngleSensorParams,
                                       mock_primary_sensor,
                                       mock_reference_sensor};
  EXPECT_CALL(mock_reference_sensor, Read()).WillOnce(Return(kExpectedAngle));
  EXPECT_CALL(mock_primary_sensor, Read()).WillOnce(Return(kExpectedAngle));
  EXPECT_FLOAT_EQ(kExpectedAngle, combination_sensor.Read().value());
}

TEST_F(
    CombinationSensorTest,
    when_primaryAngleIsWithinToleranceToReference_expect_primaryAngleReturned) {
  static constexpr float kExpectedAngle{56.78F};
  CombinationSensor combination_sensor{params::kTillerAngleSensorParams,
                                       mock_primary_sensor,
                                       mock_reference_sensor};
  EXPECT_CALL(mock_reference_sensor, Read())
      .WillOnce(Return(kExpectedAngle - 1));
  EXPECT_CALL(mock_primary_sensor, Read()).WillOnce(Return(kExpectedAngle));
  EXPECT_FLOAT_EQ(kExpectedAngle, combination_sensor.Read().value());
}

TEST_F(
    CombinationSensorTest,
    when_primaryAngleExceedsToleranceToReference_expect_referenceAngleReturned) {
  static constexpr float kExpectedAngle{23.45F};
  CombinationSensor combination_sensor{params::kTillerAngleSensorParams,
                                       mock_primary_sensor,
                                       mock_reference_sensor};
  EXPECT_CALL(mock_reference_sensor, Read()).WillOnce(Return(kExpectedAngle));
  EXPECT_CALL(mock_primary_sensor, Read())
      .WillOnce(Return(kExpectedAngle + 2.01));
  EXPECT_FLOAT_EQ(kExpectedAngle, combination_sensor.Read().value());
}

} // namespace tiller
