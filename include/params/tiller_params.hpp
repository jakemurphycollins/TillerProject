/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <cstdint>
#include <utility>

#include "combination_sensor.hpp"
#include "dummy_adc_driver.hpp"
#include "dummy_encoder_driver.hpp"
#include "encoder_sensor.hpp"
#include "linear_mapping.hpp"

namespace tiller::params
{

static constexpr float kAngleIncrementDegrees{0.1};
static constexpr uint64_t kTickPeriodMs{10};
static constexpr std::pair<float, float> kPotentiometerVoltageLimits{0.0F,
                                                                     5.0F};
static constexpr std::pair<float, float> kTillerAngleLimits{-90.0F, 90.0F};

/**
 * @brief Params for the linear mapping used by the tiller potentiometer
 *
 */
static constexpr utility::LinearMapping<float>::Params
    kPotentiometerMappingParams{
        .input_limits = kPotentiometerVoltageLimits,
        .output_limits = kTillerAngleLimits,
    };

/**
 * @brief Params for the incremental encoder
 *
 */
static constexpr EncoderSensor::Params kTillerEncoderParams{
    .degrees_per_encoder_tick = 0.01F,
};

/**
 * @brief Params for the combining the relative encoder with the absolute
 * potentiometer
 *
 */
static constexpr CombinationSensor::Params kTillerAngleSensorParams{
    .max_drift_deg = 2.0F,
};

static constexpr size_t kMaxNumTasks{
    1};  ///< Number of tasks the scheduler can hold

static constexpr DummyAdcDriver::Params kADCParams{
    .voltage_increment =
        kAngleIncrementDegrees *
        ((kPotentiometerVoltageLimits.second -
          kPotentiometerVoltageLimits.first) /
         (kTillerAngleLimits.second - kTillerAngleLimits.first)),
    .limits = kPotentiometerVoltageLimits,
    .odds_out_of = 1000,            ///< Odds are out of 1000
    .odds_to_change_direction = 2,  ///< 0.2% chance of changing direction, note
                                    ///< this is checked every loop
};

static constexpr DummyEncoderDriver::Params kEncoderDriverParams{
    .increment = static_cast<uint16_t>(
        kAngleIncrementDegrees / kTillerEncoderParams.degrees_per_encoder_tick),
    .odds_out_of = 100,   ///< Odds are out of 100
    .odds_to_occur = 20,  ///< 20% odds of an encoder error being injected
};

}  // namespace tiller::params