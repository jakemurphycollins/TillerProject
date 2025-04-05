#include "encoder_sensor.hpp"
#include "gmock_angle_sensor.hpp"
#include "gmock_encoder_driver.hpp"
#include "tiller_params.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <stdint.h>

namespace tiller {

using testing::Return;

class EncoderSensorTest : public testing::Test {
protected:
  void SetUp() override {
    EXPECT_CALL(mock_encoder, Read()).WillRepeatedly(Return(kDummyEnocderTick));
  }

  MockEncoderDriver mock_encoder;
  MockAngleSensor mock_absolute_sensor;
  static constexpr float kTolerance{0.001};
  static constexpr uint16_t kDummyEnocderTick{123};
};

TEST_F(EncoderSensorTest, when_instantiated_expected_angleToBeZero) {
  EncoderSensor encoder_sensor{params::kTillerEncoderParams, mock_encoder};
  EXPECT_CALL(mock_encoder, Read()).WillOnce(Return(kDummyEnocderTick));
  EXPECT_NEAR(0, encoder_sensor.Read().value(), kTolerance);
}

TEST_F(EncoderSensorTest, when_encoderReadingIncreasesByOneDeg_expect_OneDeg) {
  static constexpr uint16_t kNextEncoderTick{
      kDummyEnocderTick +
      static_cast<uint16_t>(
          1 / params::kTillerEncoderParams.degrees_per_encoder_tick)};
  EncoderSensor encoder_sensor{params::kTillerEncoderParams, mock_encoder};
  EXPECT_CALL(mock_encoder, Read()).WillOnce(Return(kNextEncoderTick));
  EXPECT_NEAR(1.0F, encoder_sensor.Read().value(), kTolerance);
}

TEST_F(
    EncoderSensorTest,
    when_initialEncoderTickIsZero_and_nextEncoderTickIsUint16Max_expect_negativeAngle) {
  EXPECT_CALL(mock_encoder, Read()).WillOnce(Return(0));
  EncoderSensor encoder_sensor{params::kTillerEncoderParams, mock_encoder};
  EXPECT_CALL(mock_encoder, Read()).WillOnce(Return(UINT16_MAX));
  EXPECT_NEAR(-params::kTillerEncoderParams.degrees_per_encoder_tick,
              encoder_sensor.Read().value(), kTolerance);
}

TEST_F(EncoderSensorTest,
       when_resetIsCalled_expect_angleToBeSetToTheGivenValue) {
  static constexpr float kInitialAngle{35.0F};
  EncoderSensor encoder_sensor{params::kTillerEncoderParams, mock_encoder};
  encoder_sensor.Reset(kInitialAngle);
  EXPECT_FLOAT_EQ(kInitialAngle, encoder_sensor.Read().value());
}

} // namespace tiller