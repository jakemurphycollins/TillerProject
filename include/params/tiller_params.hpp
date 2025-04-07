/*
 *   Copyright (c) 2025
 *   All rights reserved.
 */
#pragma once
#include <stdint.h>

#include <cstdint>
#include <utility>

#include "combination_sensor.hpp"
#include "dummy_adc_driver.hpp"
#include "dummy_encoder_driver.hpp"
#include "encoder_sensor.hpp"
#include "linear_mapping.hpp"

namespace tiller::params
{

static constexpr float kAngleIncrementDegrees{0.5};
static constexpr uint64_t kTickPeriodMs{100};
static constexpr std::pair<float, float> kPotentiometerVoltageLimits{0.0F,
                                                                     5.0F};
static constexpr std::pair<float, float> kTillerAngleLimits{-90.0F, 90.0F};
static constexpr uint16_t kEncoderTicksPerDegree{100};

///< The smallest angle change per iteration, note this is also the amount the
///< encoder "slips". So if its decreased, it will take longer to accumulate
///< encoder error and vice versa if its increased
static constexpr float kSmallestAngleChange{0.1};

///< 20 out of 100 odds to miss an encoder change
static constexpr int kOddsOutOfToDropEncoderTicks{100};
static constexpr int kOddsToDropEncoderTicks{20};

///< 15 out of 10,000 odds to change directions each time a new angle is
///< written, changes direction often. You can reduce the odds to in order to
///< reduce the occurance
static constexpr int kOddsOutOfToChangeDirection{10000};
static constexpr int kOddsToChangeDirection{15};

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

}  // namespace tiller::params