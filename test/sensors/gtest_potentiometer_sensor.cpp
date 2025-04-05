#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "potentiometer_sensor.hpp"
#include "gmock_adc_driver.hpp"

class PotentiometerSensorTest : public testing::Test {
    void SetUp() {

    }
    tiller::MockAdcDriver mock_driver;
    tiller::PotentiometerSensor sensors;
};

TEST_F(PotentiometerSensorTest, expect_fail) {
    FAIL();
}

TEST_F(PotentiometerSensorTest, expect_pass) {
    SUCCEED();
}

TEST_F(PotentiometerSensorTest, expect_pass_again) {
    SUCCEED();
}