/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>

#include "gmock_adc_driver.hpp"
#include "potentiometer_sensor.hpp"
#include "tiller_params.hpp"


using testing::Optional;
using testing::Return;

class PotentiometerSensorTest : public testing::Test
{
   protected:
    void SetUp() {}
    tiller::MockAdcDriver mock_adc;
    tiller::PotentiometerSensor sensors{mock_adc};
    static constexpr float kTolerance{0.001};
};

TEST_F(PotentiometerSensorTest, when_sensorReads2p5V_expect_0deg)
{
    EXPECT_CALL(mock_adc, ReadVoltage()).WillOnce(Return(2.5));
    EXPECT_NEAR(0.0F, sensors.Read().value(), kTolerance);
}

TEST_F(PotentiometerSensorTest, when_sensorReads5p0V_expect_90deg)
{
    EXPECT_CALL(mock_adc, ReadVoltage()).WillOnce(Return(5.0));
    EXPECT_NEAR(90.0F, sensors.Read().value(), kTolerance);
}

TEST_F(PotentiometerSensorTest, when_sensorReads0p0V_expect_n90deg)
{
    EXPECT_CALL(mock_adc, ReadVoltage()).WillOnce(Return(0.0));
    EXPECT_NEAR(-90.0F, sensors.Read().value(), kTolerance);
}

TEST_F(PotentiometerSensorTest, when_sensorReadsNaN_expect_nullopt)
{
    EXPECT_CALL(mock_adc, ReadVoltage()).WillOnce(Return(NAN));
    EXPECT_EQ(std::nullopt, sensors.Read());
}

TEST_F(PotentiometerSensorTest, when_sensorReadsInf_expect_nullopt)
{
    EXPECT_CALL(mock_adc, ReadVoltage()).WillOnce(Return(INFINITY));
    EXPECT_EQ(std::nullopt, sensors.Read());
}

TEST_F(PotentiometerSensorTest, when_sensorReportsLargerThanMax_expect_max)
{
    EXPECT_CALL(mock_adc, ReadVoltage())
        .WillOnce(Return(
            tiller::params::kPotentiometerMappingParams.input_limits.second +
            0.1));
    EXPECT_EQ(tiller::params::kPotentiometerMappingParams.output_limits.second,
              sensors.Read());
}

TEST_F(PotentiometerSensorTest, when_sensorReportsSmallerThanMin_expect_min)
{
    EXPECT_CALL(mock_adc, ReadVoltage())
        .WillOnce(Return(
            tiller::params::kPotentiometerMappingParams.input_limits.first -
            0.1));
    EXPECT_EQ(tiller::params::kPotentiometerMappingParams.output_limits.first,
              sensors.Read());
}